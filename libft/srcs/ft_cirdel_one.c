/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cirdel_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 09:00:19 by niccheva          #+#    #+#             */
/*   Updated: 2014/04/30 09:06:28 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_cirdel_one(t_circle **root, t_circle *del)
{
	t_circle	*cursor;

	if (root)
	{
		cursor = (*root)->next;
		while (cursor != *root && cursor != del)
			cursor = cursor->next;
		if (cursor == del)
		{
			free(cursor);
			del = NULL;
		}
	}
}
