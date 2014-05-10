/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkcmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 19:43:38 by anramos           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/05/10 15:23:02 by niccheva         ###   ########.fr       */
=======
/*   Updated: 2014/05/10 09:14:00 by anramos          ###   ########.fr       */
>>>>>>> 274585e7c4ed467d55722c8dd0a246ac6590ffa2
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
	char	**cmdcp;
	int		i;

	i = 0;
	cmd = ft_strtrim(cmd);
	envcp = ft_strsplit(env, ':');
	cmdcp = ft_strsplit(cmd, ' ');
	while (envcp[i])
	{
<<<<<<< HEAD
		tmp = ft_parsecmd(cmd, envcp[i]);
		if (!access(tmp, F_OK))
=======
		tmp = ft_parsecmd(cmdcp[0], envcp[i]);
		if (access(tmp, F_OK) >= 0)
>>>>>>> 274585e7c4ed467d55722c8dd0a246ac6590ffa2
		{
			if (access(tmp, X_OK))
				ft_fatal_error("permission denied.");
			ft_destroy_tab(envcp);
			return (tmp);
		}
		ft_strdel(&tmp);
		i++;
	}
	ft_fatal_error("command not found.");
<<<<<<< HEAD
	return (NULL);
=======
	ft_destroy_tab(envcp);
	return (0);
>>>>>>> 274585e7c4ed467d55722c8dd0a246ac6590ffa2
}
