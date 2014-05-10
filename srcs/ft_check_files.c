/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_files.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 01:20:53 by anramos           #+#    #+#             */
/*   Updated: 2014/05/10 17:03:58 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Verifie l'existance du input file, et s'il est possible de modifier ou
creer le output file */

int		ft_check_files(char *file1, char *file2)
{
	if (!access(file1, F_OK))
	{
		if (access(file1, R_OK))
			ft_fatal_error("infile: permission denied.");
	}
	else
		ft_fatal_error("infile: no such file.");
	if (!access(file2, F_OK))
	{
		if (!access(file2, W_OK))
			ft_fatal_error("outfile: permission denied.");
	}
	else
		return (open(file2, O_CREAT, 0777 | O_RDWR));
	return (0);
}
