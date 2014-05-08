/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:32:38 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:32:40 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char *temp;
	size_t	i;

	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (temp[i] == c)
		{
			return (&temp[i]);
		}
		i++;
	}
	return (NULL);
}
