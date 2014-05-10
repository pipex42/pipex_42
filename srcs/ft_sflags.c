/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sflags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 01:18:23 by anramos           #+#    #+#             */
/*   Updated: 2014/05/10 09:07:42 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Extrait les options envoyees avec la commande, en vue d'une utilisation
avec execve. */

char	**ft_sflags(char *cmd)
{
	char	**tab;
	char	**tab2;
	size_t	tab_len;
	size_t	j;

	tab = ft_strsplit(cmd, ' ');
	tab_len = ft_count_tab(tab) - 1;
	tab2 = malloc(sizeof(char**) * tab_len);
	j = 0;
	if (tab_len <= 0)
		return (NULL);
	while (j < tab_len)
	{
		if (tab[j + 1])
			tab2[j] = tab[j + 1];
		j++;
	}
	tab2[j] = 0;
	ft_destroy_tab(tab);
	return (tab2);
}
