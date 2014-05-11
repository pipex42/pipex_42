/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 22:22:13 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/11 11:27:45 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char		**ft_test(char **cmd, char **path)
{
	char		*tmp;
	char		*tmp2;
	int			i;

	i = 0;
	while (path[i])
	{
		tmp = ft_strjoin(path[i], "/");
		tmp2 = ft_strjoin(tmp, cmd[0]);
		ft_strdel(&tmp);
		if (!access(tmp2, F_OK))
		{
			if (access(tmp2, X_OK))
				ft_fatal_error("permission denied.");
			ft_strdel(&(cmd[0]));
			cmd[0] = ft_strdup(tmp2);
			ft_strdel(&tmp2);
			return (cmd);
		}
		ft_strdel(&tmp2);
		i++;
	}
	ft_fatal_error("command not found.");
	return (NULL);
}

static char		*ft_test_access(char *cmd)
{
	char		**tab;

	tab = ft_strsplit(cmd, ' ');
	if (access(tab[0], F_OK))
		ft_fatal_error("command not found.");
	else
	{
		if (access(tab[0], X_OK))
			ft_fatal_error("permission denied.");
	}
	return (ft_strdup(cmd));
}

static char		*ft_check_cmd(char *cmd, char **env)
{
	char		*new;
	char		*path;
	char		**tab;
	char		**tmp;

	cmd = ft_replace(cmd, env);
	if ((path = ft_getenv("PATH", env)) == NULL)
		ft_fatal_error("please enter a valid env.");
	if (!ft_strnequ(cmd, "/", 1) && !ft_strnequ(cmd, "./", 2))
	{
		tab = ft_strsplit(path, ':');
		tmp = ft_strsplit(cmd, ' ');
		tmp = ft_test(tmp, tab);
		new = ft_rejoin(tmp, " ");
		ft_destroy_tab(tmp);
		ft_destroy_tab(tab);
	}
	else
		new  = ft_test_access(cmd);
	ft_strdel(&path);
	return (new);
}

void			ft_check(char **av, char **env)
{
	char		*cmd1;
	char		*cmd2;

	cmd1 = ft_check_cmd(av[2], env);
	cmd2 = ft_check_cmd(av[3], env);
	ft_exec(cmd1, cmd2, av, env);
}
