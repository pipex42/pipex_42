/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 15:22:23 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/07 15:30:23 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_return(int neg, int size, int n)
{
	char			*nbr;
	int				i;
	int				a;

	nbr = ft_strnew(size + neg);
	i = 0;
	a = 1;
	while (size--)
		a *= 10;
	if (neg)
		nbr[i++] = '-';
	while (a >= 1)
	{
		nbr[i++] = ((n / a) + '0');
		n %= a;
		a /= 10;
	}
	nbr[i] = '\0';
	return (nbr);
}

char				*ft_itoa(int n)
{
	int				neg;
	int				i;
	int				size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
		neg++;
	n = (n > 0) ? n : -n;
	i = 1;
	size = 0;
	while ((n / i) > 9)
	{
		i *= 10;
		size++;
	}
	return (ft_return(neg, size, n));
}
