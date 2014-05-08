/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rejoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 18:27:15 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 18:35:45 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_rejoin(char **cmd, char *c)
{
	int		i;
	char	*tmp;
	char	*new;

	new = NULL;
	i = 0;
	while (cmd[i])
	{
		if (new)
		{
			tmp = ft_strjoin(new, c);
			ft_strdel(&new);
			new = ft_strjoin(tmp, cmd[i]);
			ft_strdel(&tmp);
		}
		else
			new = ft_strdup(cmd[i]);
		i++;
	}
	return (new);
}
