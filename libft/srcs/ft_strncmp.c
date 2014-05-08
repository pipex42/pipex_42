/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 15:26:15 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 15:27:58 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (!n || (!*s1 && !*s2))
		return (0);
	else if (*s1 != *s2)
		return (*s1 - *s2);
	return (ft_strncmp(++s1, ++s2, --n));
}
