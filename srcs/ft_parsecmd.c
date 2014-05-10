/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsecmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 18:28:51 by anramos           #+#    #+#             */
/*   Updated: 2014/05/10 09:12:18 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Reconstruit le path de la commande recue. */

char		*ft_parsecmd(char *cmd, char *cenv)
{
	char	*tmp;
	char	*tmp2;

	tmp = ft_strjoin(cenv, "/");
	tmp2 = ft_strjoin(tmp, cmd);
	ft_strdel(&tmp);
	return (tmp2);
}
