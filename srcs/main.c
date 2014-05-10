/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 21:54:56 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/10 17:10:39 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pipex.h"

void		ft_exec_cmd(int fd, char **av, char **env)
{
	pid_t	pid;
	int		pipe_fd[2];

	if (pipe(pipe_fd) == -1)
		ft_fatal_error("pipe create failed.");
	if ((pid = fork()) < 0)
		ft_fatal_error("fork failed.");
	if (pid == 0)
	{
		close(pipe_fd[1]); /* ferme la sortie du pipe */
		/* stdout est redirigee vers l'entree du pipe */
		if (dup2(pipe_fd[0], 1) == -1)
			ft_fatal_error("stdout redirect fail.");
		close(pipe_fd[0]);
		if (execve(av[2], ft_strsplit(av[2], ' '), env) == -1)
			ft_fatal_error("execute cmd1 failed.");
	}
	else
	{
		close(pipe_fd[0]); /* ferme l'entree du pipe */
		/* la sortie du pipe est redirigee vers stdout */
		if (dup2(0, pipe_fd[1]) == -1)
			ft_fatal_error("stdin redirect fail.");
		close(pipe_fd[1]);
		if (execve(cmd2, ft_strsplit(av[3], ' '), env) == -1)
			ft_fatal_error("execute cmd2 failed.");
	}
}

int			main(int ac, char **av, char **env)
{
	char	*path;
	int		fd;

	if (ac != 5)
		ft_fatal_error("usage: ./pipex infile cmd1 cmd2 outfile.");
	if ((path = ft_getenv("PATH", env)) == NULL)
		ft_fatal_error("please enter a valid env.");
	av[2] = ft_checkcmd(av[2], path);
	av[3] = ft_checkcmd(av[3], path);
	fd = ft_check_files(av[1], av[4]);
	ft_exec_cmd(fd, av, env);
	ft_putnbr(fd);
	return (0);
}
