/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/11 11:28:19 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/11 11:37:45 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char		*ft_new_str(char *str, char **env)
{
	char		*tmp1;
	char		*tmp2;
	char		*home;
	int			i;

	if ((home = ft_getenv("HOME", env)) != NULL)
	{
		if (ft_strnequ(str, "~/", 2))
			i = 2;
		else if (ft_strnequ(str, "~", 1))
			i = 1;
		else
			return (str);
		tmp1 = ft_strsub(str, 1, ft_strlen(str) - 1);
		tmp2 = (i == 1) ? ft_strjoin(home, "/") : ft_strdup(home);
		ft_strdel(&str);
		ft_strdel(&home);
		str = ft_strjoin(tmp2, tmp1);
		ft_strdel(&tmp2);
		ft_strdel(&tmp1);
	}
	return (str);
}

char			*ft_replace(char *cmd, char **env)
{
	char		**tab;
	int			i;

	i = 0;
	tab = ft_strsplit(cmd, ' ');
	while (tab[i])
	{
		if (ft_strnequ(tab[i], "~", 1) || ft_strnequ(tab[i], "~/", 2))
			tab[i] = ft_new_str(tab[i], env);
		i++;
	}
	cmd = ft_rejoin(tab, " ");
	ft_destroy_tab(tab);
	return (cmd);
}
