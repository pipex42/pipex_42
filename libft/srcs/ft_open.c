/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 16:29:04 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/07 16:36:40 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <errno.h>
#include "libft.h"

int			ft_open(char *file, int flags)
{
	int		fd;
	int		errno;

	fd = open(file, flags);
	if (fd == -1)
	{
		if (errno == EACCES)
			ft_fatal_error("open() failed: permission denied.");
		else if (errno == EISDIR || errno == ENOTDIR)
			ft_fatal_error("open() failed: is a directory.");
		else if (errno == ENAMETOOLONG)
			ft_fatal_error("open() failed: the path name is too long.");
		else if (errno == ENOENT)
			ft_fatal_error("open() failed: the file doesn't exist..");
	}
	return (fd);
}
