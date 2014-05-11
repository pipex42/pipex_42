/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 13:51:09 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 13:54:29 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	if (size < len)
		return (size + ft_strlen(src));
	else
	{
		while (i < (size - 1) && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (ft_strlen(src) + len);
	}
}
