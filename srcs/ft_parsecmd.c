/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsecmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 18:28:51 by anramos           #+#    #+#             */
/*   Updated: 2014/05/09 19:53:13 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char		*ft_parsecmd(char *cenv, char *cmd)
{
	char	*tmp;

	tmp = ft_strjoin(cenv, "/");
	ft_strjoin(tmp, cmd);
	return (tmp);
}
