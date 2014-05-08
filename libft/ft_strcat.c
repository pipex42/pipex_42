/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:34:13 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:34:16 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	size_t	len;
	char	*tdest;

	i = 0;
	len = ft_strlen(dest);
	tdest = dest;
	while (src[i])
	{
		tdest[len + i] = src[i];
		i++;
	}
	tdest[len + i] = '\0';
	return (tdest);
}
