/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 16:57:46 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 13:35:35 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(char const *s1, char const *s2)
{
	if (!*s1 & !*s2)
		return (0);
	else if (*s1 != *s2)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (ft_strcmp(++s1, ++s2));
}
