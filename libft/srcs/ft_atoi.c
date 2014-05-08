/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 14:03:00 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/06 14:06:51 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(char *s)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (ft_issigned(*s))
		sign = (*s++ == '+') ? 1 : -1;
	while (ft_isdigit(*s))
		n = (n * 10) + (*s++ - '0');
	n *= sign;
	return (n);
}
