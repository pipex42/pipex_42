/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 14:39:34 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/06 14:41:41 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, char const *s2)
{
	char	*ret;

	ret = s1;
	while (*s1)
		s1++;
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (ret);
}
