/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:36:59 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:37:01 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *need)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (hay[i])
	{
		if (hay[i] == need[j])
			j++;
		if (j == ft_strlen((char*)need))
			return ((char *)&hay[i - j + 1]);
		i++;
	}
	return (NULL);
}
