/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 15:59:33 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/07 16:10:28 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char const		*s2;

	s2 = s;
	if (s2)
	{
		while (n--)
		{
			if (*s2 == (unsigned char)c)
				return ((void *)s2);
			s2++;
		}
	}
	return (NULL);
}
