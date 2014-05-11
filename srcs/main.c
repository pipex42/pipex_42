/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 22:09:02 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/10 22:33:25 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	ft_error(char **env)
{
	if (!env || !env[0])
		ft_fatal_error("please enter a valid env.");
}

int			main(int ac, char **av, char **env)
{
	if (ac != 5)
		ft_fatal_error("usage: pipex infile cmd1 cmd2 outfile.");
	ft_error(env);
	ft_check(av, env);
	return (0);
}
