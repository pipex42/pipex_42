/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ciradd_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 23:07:46 by niccheva          #+#    #+#             */
/*   Updated: 2014/04/30 08:52:32 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_circle.h"

void			ft_ciradd_tail(t_circle **root, char *s)
{
	t_circle	*new;

	new = ft_cirnew(s);
	if (root)
	{
		if (*root)
		{
			new->next = *root;
			new->prev = (*root)->prev;
			(*root)->prev = new;
			new->prev->next = new;
			(*root)->size += 1;
		}
		else
			*root = new;
	}
}
