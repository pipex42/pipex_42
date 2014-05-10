/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsecmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 18:28:51 by anramos           #+#    #+#             */
/*   Updated: 2014/05/10 04:52:23 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Reconstruit le path de la commande recue. */

char		*ft_parsecmd(char *cmd, char *cenv)
{
	char	*tmp;
	char	*tmp2;
	char	**tmp3;

	tmp = ft_strjoin(cenv, "/");
	tmp3 = ft_strsplit(cmd, ' ');
	tmp2 = ft_strjoin(tmp, tmp3[0]);
	ft_strdel(&tmp);
	ft_destroy_tab(tmp3);
	return (tmp2);
}
