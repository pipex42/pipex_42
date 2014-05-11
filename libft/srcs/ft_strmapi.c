/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 15:07:02 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 15:18:02 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (new)
		{
			i = 0;
			while (s[i])
			{
				new[i] = f(i, s[i]);
				i++;
			}
		}
		return (new);
	}
	return (NULL);
}
