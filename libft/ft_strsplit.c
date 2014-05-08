/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:30:49 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:30:53 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	count;
	int	nbw;

	i = 0;
	count = 0;
	nbw = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		if (count == 1)
		{
			nbw++;
			count = 0;
		}
		i++;
	}
	return (nbw);
}

char	*ft_add_to_tab(int i, char const *s, char c)
{
	int		w_size;
	char	*w;
	int		j;

	w_size = i;
	j = 0;
	while (s[w_size] != c)
		w_size++;
	w = (char *)malloc(sizeof(char) * w_size - i);
	if (!w)
		return (NULL);
	else
	{
		while (i < w_size)
		{
			w[j] = s[i];
			i++;
			j++;
		}
		w[j] = '\0';
		return (w);
	}
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = NULL;
	if (s)
		tab = (char **)malloc(sizeof(char *) * ft_wordcount(s, c) + 1);
	while(j < ft_wordcount(s, c))
	{
		if (s[i] != c && s[i - 1] == c)
		{
			tab[j] = ft_add_to_tab(i, s, c);
			i += ft_strlen(tab[j]) + 1;
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}
