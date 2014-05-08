#include "pipex.h"

int			ft_checkcmd(char *cmd, char *env)
{
	char	**envcp;
	char	*tmp;
	char	*tmp2;
	int		i;

	i = 0;
	envcp = ft_strsplit(env, ':');
	while (envcp[i])
	{
		tmp = ft_strjoin(envcp[i], "/");
		tmp2 = ft_strjoin(tmp, cmd);
		ft_strdel(&tmp);
		if (access(tmp2, F_OK) >= 0)			
		{
			if (access(tmp2, X_OK) < 0)
				ft_fatal_error("permission denied.");
			ft_strdel(&tmp2);
			ft_destroy_tab(envcp);
			return (1);
		}		
		i++;
		ft_strdel(&tmp2);
	}
	ft_fatal_error("command not found.");
	ft_destroy_tab(envcp);
	return (0);
}

int			main(int ac, char **av, char **env)
{
	char	*envset;

	(void)ac;
	(void)av;
	
	envset = ft_getenv("PATH", env);
	if (ft_checkcmd("ls", envset))
		ft_putendl("ok");
	else
		ft_putendl("tamere");
	return (0);
}