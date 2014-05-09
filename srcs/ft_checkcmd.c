/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkcmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 19:43:38 by anramos           #+#    #+#             */
/*   Updated: 2014/05/09 19:56:03 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int			ft_checkcmd(char *cmd, char *env)
{
	char	**envcp;
	char	*tmp;
	int		i;

	i = 0;
	envcp = ft_strsplit(env, ':');
	while (envcp[i])
	{
		tmp = ft_parsecmd(envcp[i], cmd);
		if (access(tmp, F_OK) >= 0)
		{
			if (access(tmp, X_OK) < 0)
				ft_fatal_error("permission denied.");
			ft_strdel(&tmp);
			ft_destroy_tab(envcp);
			return (1);
		}
		i++;
		ft_strdel(&tmp);
	}
	ft_fatal_error("command not found.");
	ft_destroy_tab(envcp);
	return (0);
}
