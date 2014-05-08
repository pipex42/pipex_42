#include "pipex.h"

int	main(int ac, char **av, char **env)
{
	char	*envset;	
	(void)ac;
	(void)av;
	envset = ft_getenv("PATH=", env);
	ft_putstr(envset);

	return (0);
}