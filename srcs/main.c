/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 21:54:56 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/10 15:28:43 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void		ft_exec_cmd(char *cmd1, char *cmd2, char **av, char **env)
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
		if (execve(cmd1, ft_strsplit(av[2], ' '), env) == -1)
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
	char	*envset;
	char	*cmd1;
	char	*cmd2;

	envset = ft_getenv("PATH", env);
	cmd1 = ft_checkcmd(av[2], envset);
	cmd2 = ft_checkcmd(av[3], envset);
	if (ac != 5)
		ft_fatal_error("too few/much arguments.");
	if (cmd1 && cmd2)
	{
		if (ft_check_files(av[1], av[4]) == -1)
			ft_fatal_error("invalid file.");
		ft_exec_cmd(cmd1, cmd2, av, env);
	}
/*	sleep(5000);*/
	return (0);
}
