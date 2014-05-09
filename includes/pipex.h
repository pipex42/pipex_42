/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 17:46:26 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/09 19:44:31 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

#include "libft.h"

char		*ft_getenv(char *key, char **env);
char		*ft_parsecmd(char *cenv, char *cmd);
int			ft_checkcmd(char *cmd, char *env);

#endif
