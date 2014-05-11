/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ciradd_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 08:53:05 by niccheva          #+#    #+#             */
/*   Updated: 2014/04/30 08:56:09 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_ciradd_head(t_circle **root, char *s)
{
	t_circle	*new;

	new = ft_cirnew(s);
	if (root)
	{
		if (*root)
		{
			new->next = (*root)->next;
			new->prev = *root;
			(*root)->next = new;
			new->next->prev = new;
			(*root)->size += 1;
		}
		else
			*root = new;
	}
}
