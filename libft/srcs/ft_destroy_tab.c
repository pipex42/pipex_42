/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 22:44:39 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/06 14:24:04 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_destroy_tab(char **tab)
{
	int		i;

	i = 0;
	if (tab)
	{
		while (tab[i])
			ft_strdel(&(tab[i++]));
		free(tab);
		tab = NULL;
	}
}
