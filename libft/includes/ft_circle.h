/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circle.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 13:50:31 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 17:32:30 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CIRCLE_H
# define FT_CIRCLE_H

# include "libft.h"

typedef struct			s_circle
{
	char				*content;
	int					size;
	struct s_circle		*next;
	struct s_circle		*prev;
}						t_circle;

t_circle				*ft_cirnew(char *s);
void					ft_ciradd_tail(t_circle **root, char *s);

#endif
