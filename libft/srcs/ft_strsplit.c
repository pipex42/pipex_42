/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 16:43:20 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 17:31:09 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sep(char const *s, char c)
{
	int			sep;

	sep = 0;
	while (*s)
	{
		if (*s == c)
		{
			sep++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	return (sep);
}

static void		ft_write_in_split(char **split, char const *s, char c)
{
	int			i;
	int			j;
	int			len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			split[j++] = ft_strsub(s, (i - len), len);
			while (s[i] == c)
				i++;
			len = 0;
		}
		else
		{
			i++;
			len++;
		}
	}
	if (len)
		split[j++] = ft_strsub(s, (i - len), len);
	split[j] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char		**split;
	int			words;

	if (!s)
		return (NULL);
	words = (1 + ft_sep(s, c));
	split = (char **)malloc(sizeof(*split) * (words + 1));
	if (split)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
			ft_write_in_split(split, s, c);
		else
			split[0] = NULL;
	}
	return (split);
}
