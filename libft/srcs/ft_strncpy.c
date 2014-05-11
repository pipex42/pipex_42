/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 15:28:13 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 17:30:24 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, char const *src, size_t n)
{
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char *)src;
	tmp2 = dst;
	while (n--)
	{
		if (*tmp1)
			*tmp2++ = *tmp1++;
		else
			*tmp2++ = '\0';
	}
	return (dst);
}
