#include "../include/minishell.h"

int	check_echo_n(char *keyword)
{
	int	i;

	i = 0;
	while (keyword[++i])
		if (keyword[i] != 'n')
			return (0);
	return (1);
}

int	is_full_space(char *rl)
{
	int	i;

	i = 0;
	while (rl && rl[i])
	{
		if (rl[i] != ' ' && rl[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}
