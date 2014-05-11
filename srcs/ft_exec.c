/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 23:10:38 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/11 16:05:41 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

static void		ft_exec_son(char *cmd, int *pfd, int fd, char **env)
{
	char		**tab;

	ft_close(pfd[0]);
	dup2(fd, 0);
	dup2(pfd[1], 1);
	ft_close(pfd[1]);
	tab = ft_strsplit(cmd, ' ');
	ft_strdel(&cmd);
	execve(tab[0], tab, env);
	ft_fatal_error("Child Exec failed.");
}

static void     ft_exec_father(char *cmd, int *pfd, int fd, char **env)
{
	char		**tab;

	ft_close(pfd[1]);
	dup2(pfd[0], 0);
	dup2(fd, 1);
	ft_close(pfd[0]);
	tab = ft_strsplit(cmd, ' ');
	ft_strdel(&cmd);
	execve(tab[0], tab, env);
	ft_fatal_error("Parent Exec failed.");
}

void			ft_exec(char *cmd1, char *cmd2, char **av, char **env)
{
	pid_t		father;
	int			pfd[2];
	int			fdf;
	int			fds;

	if ((fdf = open(av[4], O_WRONLY | O_CREAT, 0755)) == -1)
		ft_fatal_error("open() failed.");
	if ((fds = open(av[1], O_RDONLY)) == -1)
		ft_fatal_error("open() failed.");
	if (pipe(pfd) == -1)
		ft_fatal_error("pipe() failed.");
	if ((father = fork()) == -1)
		ft_fatal_error("fork() failed.");
	if (!father)
		ft_exec_son(cmd1, pfd, fds, env);
	if (father > 0)
		ft_exec_father(cmd2, pfd, fdf, env);
}
