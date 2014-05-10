/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_files.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 01:20:53 by anramos           #+#    #+#             */
/*   Updated: 2014/05/10 15:25:03 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Verifie l'existance du input file, et s'il est possible de modifier ou
creer le output file */

int		ft_check_files(char *file1, char *file2)
{
	if (open(file1, O_RDONLY) == -1)
		return (-1);
	if (open(file2, O_WRONLY | O_TRUNC | O_CREAT, 0777) == -1)
		return (-1);
	return (0);
}
