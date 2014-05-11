/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cirdestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 09:06:37 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 17:32:45 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_cirdestroy(t_circle **root)
{
	if (root)
	{
		if ((*root)->next != *root)
		{
			ft_cirdel_one(root, (*root)->next);
			ft_cirdestroy(root);
		}
		else
		{
			free(*root);
			*root = NULL;
			root = NULL;
		}
	}
}
