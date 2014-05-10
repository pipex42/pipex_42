/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkcmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 19:43:38 by anramos           #+#    #+#             */
/*   Updated: 2014/05/10 15:23:02 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*	Verifie si la commande passee existe et est executable.
	Renvoi le chemin de la commande s'il est trouvee.
*/

char		*ft_checkcmd(char *cmd, char *env)
{
	char	**envcp;
	char	*tmp;
	int		i;

	i = 0;
	cmd = ft_strtrim(cmd);
	envcp = ft_strsplit(env, ':');
	while (envcp[i])
	{
		tmp = ft_parsecmd(cmd, envcp[i]);
		if (!access(tmp, F_OK))
		{
			if (access(tmp, X_OK))
				ft_fatal_error("permission denied.");
			ft_destroy_tab(envcp);
			return (tmp);
		}
		ft_strdel(&tmp);
		i++;
	}
	ft_destroy_tab(envcp);
	ft_fatal_error("command not found.");
	return (NULL);
}
