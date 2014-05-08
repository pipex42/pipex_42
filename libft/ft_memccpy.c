/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:32:29 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:32:32 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*tdest;
	unsigned char	*tsrc;
	unsigned char	d;

	tdest = dest;
	tsrc = (unsigned char *)src;
	d = (unsigned char) c;
	i = 0;
	while (i++ < n)
	{
		tdest[i] = tsrc[i];
		if (tsrc[i] == d)
		{
			return ((void*)&tdest[i + 1]);
		}
	}
	return (NULL);
}
