/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_files.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 01:20:53 by anramos           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/05/10 15:12:25 by niccheva         ###   ########.fr       */
=======
/*   Updated: 2014/05/10 15:25:03 by anramos          ###   ########.fr       */
>>>>>>> 274585e7c4ed467d55722c8dd0a246ac6590ffa2
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Verifie l'existance du input file, et s'il est possible de modifier ou
creer le output file */

void		ft_check_files(char *file1, char *file2)
{
<<<<<<< HEAD
	if (!access(file1, F_OK))
	{
		if (access(file1, R_OK))
			ft_fatal_error("infile: permission denied.");
		return ;
	}
	else
		ft_fatal_error("infile: no such file.");
	if (access(file2, F_OK))
	{
		if (access(file2, W_OK))
			ft_fatal_error("outfile: permission denied.");
	}
=======
	if (open(file1, O_RDONLY) == -1)
		return (-1);
	if (open(file2, O_WRONLY | O_TRUNC | O_CREAT, 0777) == -1)
		return (-1);
	return (0);
>>>>>>> 274585e7c4ed467d55722c8dd0a246ac6590ffa2
}
