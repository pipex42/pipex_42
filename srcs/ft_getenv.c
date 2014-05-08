/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 17:46:06 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 17:46:07 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_getenv(char *key, char **env)
{
	int		i;
	char	**split;
	char	*val;

	val = NULL;
	if (env)
	{
		i = 0;
		while (env[i])
		{
			split = ft_strsplit(env[i], '=');
			if (ft_strequ(key, split[0]))
				val = ft_strdup(split[1]);
			ft_destroy_tab(split);
			if (val)
				break ;
			i++;
		}
	}
	return (val);
}
