/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anramos <anramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/08 21:54:56 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/09 20:10:00 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int			main(int ac, char **av, char **env)
{
	char	*envset;

	(void)ac;
	(void)av;

	envset = ft_getenv("PATH", env);
	if (ft_checkcmd("ls", envset))
		ft_putendl("ok");
	else
		ft_putendl("NOT OK");
	sleep(5000);
	return (0);
}
