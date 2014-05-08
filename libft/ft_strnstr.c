/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:36:35 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:36:37 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (need[i] == '\0')
		return ((char*)hay);
	while (hay[i])
	{
		if (hay[i] == need[j])
			j++;
		else
			j = 0;
		if (j == n)
			return ((char *)&hay[i - j + 1]);
		i++;
	}
	return (NULL);
}
