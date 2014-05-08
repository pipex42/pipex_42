/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 23:31:17 by anramos           #+#    #+#             */
/*   Updated: 2014/03/13 23:31:24 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	ret;
	int	sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				sign = -1;
			i++;
		}
		if (ft_isdigit(s[i]) == 1)
			ret = (ret * 10) + (s[i] - '0');
		else
			ret = 0;
		i++;
	}
	return (ret * sign);
}
