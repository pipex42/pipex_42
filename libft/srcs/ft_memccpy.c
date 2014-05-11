/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 15:45:37 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/07 15:50:17 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	while (n--)
	{
		if (*s == c)
			return (d + 1);
		*d++ = *s++;
	}
	return (NULL);
}
