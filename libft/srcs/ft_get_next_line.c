/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 14:24:34 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/06 14:43:29 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_realloc(char *s, int size)
{
	char			*new;

	if (size == 0)
		return (s);
	new = ft_strnew(ft_strlen(s) + size);
	if (new == NULL)
		return (NULL);
	*new = '\0';
	ft_strcat(new, s);
	*s = '\0';
	ft_strdel(&s);
	return (new);
}

static int			ft_get_the_end(char *line, char *buff)
{
	int				i;

	i = 0;
	while (line[i])
	{
		if (line[i] == '\n')
		{
			line[i] = '\0';
			*buff = '\0';
			ft_strcat(buff, &line[i + 1]);
			return (-1);
		}
		i++;
	}
	*buff = '\0';
	return (0);
}

int					ft_get_next_line(const int fd, char **line)
{
	int				i;
	static char		buf[BUFF_SIZE + 1];

	ft_strdel(line);
	*line = ft_strnew(BUFF_SIZE + 1);
	if (fd < 0 || line == NULL)
		return (-1);
	**line = '\0';
	ft_strcat(*line, buf);
	*buf = '\0';
	i = BUFF_SIZE;
	while (ft_get_the_end(*line, buf) != -1 && i == BUFF_SIZE)
	{
		i = read(fd, buf, BUFF_SIZE);
		if (i == -1)
			return (-1);
		buf[i] = '\0';
		*line = ft_realloc(*line, i);
		ft_strcat(*line, buf);
	}
	if (**line == '\0' && ft_strlen(buf) == 0 && i != BUFF_SIZE)
		return (0);
	return (1);
}
