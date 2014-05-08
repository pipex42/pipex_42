/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 09:12:41 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/07 16:46:49 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putcir(t_circle **root)
{
	t_circle	*cursor;

	if (root && *root)
	{
		cursor = (*root)->next;
		while (cursor != (*root))
		{
			ft_putendl(cursor->content);
			cursor = cursor->next;
		}
	}
}
