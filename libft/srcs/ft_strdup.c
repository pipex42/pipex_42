/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 13:54:31 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 14:12:42 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char const *s)
{
	char	*new;

	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(*new) * ft_strlen(s) + 1);
	if (new)
		new = ft_strcpy(new, s);
	return (new);
}
