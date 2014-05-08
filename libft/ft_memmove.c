/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:33:07 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:33:08 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{

	char	*temp;

	temp = malloc(sizeof(char) * (ft_strlen((char *)src) + 1));
	if (temp)
	{
		ft_memcpy(temp, src, n);
		ft_memcpy(dest, temp, n);
		free(temp);
	}
	return (dest);
}
