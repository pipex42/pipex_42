/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cirnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 22:55:22 by niccheva          #+#    #+#             */
/*   Updated: 2014/04/29 23:05:19 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_circle.h"

t_circle		*ft_cirnew(char *s)
{
	t_circle	*new;

	new = (t_circle *)malloc(sizeof(t_circle));
	if (new)
	{
		if (s)
		{
			new->content = ft_strdup(s);
			new->size = ft_strlen(s);
		}
		else
		{
			new->content = NULL;
			new->size = 0;
		}
		new->next = new;
		new->prev = new;
	}
	else
		ft_fatal_error("malloc() failed: not enought free memory.");
	return (new);
}
