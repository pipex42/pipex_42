/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 13:45:56 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 13:49:20 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	if (!(s1 && s2))
		return (NULL);
	else
	{
		join = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (join)
		{
			i = 0;
			j = 0;
			while (s1[j])
				join[i++] = s1[j++];
			j = 0;
			while (s2[j])
				join[i++] = s2[j++];
			join[i] = '\0';
		}
	}
	return (join);
}
