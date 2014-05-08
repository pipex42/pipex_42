/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:35:08 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:35:21 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;
	int		i;
	int		j;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s3 = malloc(sizeof(char) * len + 1);
	i = 0;
	j = 0;
	if (!s3)
		return (NULL);
	while(s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
