/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 16:14:12 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/07 16:39:06 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int							ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const		*src;
	unsigned char const		*dst;

	src = s1;
	dst = s2;
	if (!n)
		return (0);
	else if (*src != *dst)
		return (*src - *dst);
	else
		return (ft_memcmp((void *)++src, (void *)++dst, --n));
}
