/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 17:34:21 by niccheva          #+#    #+#             */
/*   Updated: 2014/04/27 17:35:28 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_puttab(char **tab)
{
	int		i;

	i = 0;
	if (tab)
	{
		while (tab[i])
			ft_putendl(tab[i++]);
	}
}
