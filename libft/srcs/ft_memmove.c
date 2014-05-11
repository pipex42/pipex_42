/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 16:22:22 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/07 16:28:44 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, void const *src, size_t n)
{
	void	*new;

	new = (void *)malloc(n);
	new = ft_memcpy(new, src, n);
	dst = ft_memcpy(dst, new, n);
	ft_memdel(new);
	return (dst);
}
