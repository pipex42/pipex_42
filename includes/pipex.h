/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 17:46:26 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/10 16:51:58 by anramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PIPEX_H
# define PIPEX_H

#include "libft.h"
#include <fcntl.h>

char		*ft_getenv(char *key, char **env);
char		*ft_parsecmd(char *cenv, char *cmd);
char		*ft_checkcmd(char *cmd, char *env);
char		**ft_sflags(char *cmd);
int			ft_check_files(char *file1, char *file2);

#endif
