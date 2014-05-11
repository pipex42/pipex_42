/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 16:52:34 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 16:54:57 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;

	if (!s2)
		return ((char *)s1);
	i = 0;
	while (i <= (ft_strlen(s1) - ft_strlen(s2)))
	{
		if (!ft_strncmp(&s1[i], s2, ft_strlen(s2)))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
