/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:36:07 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:36:09 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{

	size_t	i;
	size_t	len;
	char	*tdest;

	i = 0;
	len = ft_strlen(dest);
	tdest = dest;
	while (i < n)
	{
		tdest[len + i] = src[i];
		i++;
	}
	tdest[len + i] = '\0';
	return (tdest);
}
