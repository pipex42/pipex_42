/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 22:08:26 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/11 11:37:18 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

#include "libft.h"

void		ft_check(char **av, char **env);
void		ft_exec(char *cmd1, char *cmd2, char **av, char **env);
char		*ft_getenv(char *key, char **env);
char		*ft_replace(char *cmd, char **env);

#endif
