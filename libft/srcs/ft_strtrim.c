/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 16:57:48 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 17:07:17 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_get_len(char const *s)
{
	size_t			len;

	len = ft_strlen(s);
	while (ft_isspace(*s++))
		len++;
	while (*s)
		s++;
	s--;
	while (ft_isspace(*s--))
		len--;
	return (len);
}

char				*ft_strtrim(char const *s)
{
	size_t			len;
	char			*trim;
	char			*tmp;

	if (!s)
		return (NULL);
	len = ft_get_len(s);
	trim = ft_strnew(len);
	if (trim)
	{
		tmp = trim;
		while (ft_isspace(*s))
			s++;
		while (len--)
			*tmp++ = *s++;
	}
	return (trim);
}
