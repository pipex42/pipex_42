/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 13:55:57 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 13:58:59 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	char	*tmp;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (new)
		{
			tmp = new;
			while (*s)
				*tmp++ = f(*s++);
		}
		return (new);
	}
	return (NULL);
}
