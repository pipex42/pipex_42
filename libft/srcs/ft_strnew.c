/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 22:07:23 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 16:38:28 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		ft_fatal_error("malloc() failed: not enought free memory.");
	else
		ft_bzero(new, size);
	return (new);
}
