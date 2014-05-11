/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fatal_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 22:17:08 by niccheva          #+#    #+#             */
/*   Updated: 2014/04/30 14:06:00 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_fatal_error(char *s)
{
	ft_putstr_fd("Error: ", 2);
	ft_putendl_fd(s, 2);
	_exit(EXIT_FAILURE);
}
