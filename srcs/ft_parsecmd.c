/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsecmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 18:28:51 by anramos           #+#    #+#             */
/*   Updated: 2014/05/09 20:16:08 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char		*ft_parsecmd(char *cenv, char *cmd)
{
	char	*tmp;
	char	*tmp2;

	tmp = ft_strjoin(cenv, "/");
	tmp2 = ft_strjoin(tmp, cmd);
	ft_strdel(&tmp);
	return (tmp2);
}
