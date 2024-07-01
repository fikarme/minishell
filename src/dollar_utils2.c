#include "../include/minishell.h"

void	spec_dol(t_shell *shell, char *str)
{
	add_parse_subnode(shell, "minishell");
	add_parse_subnode(shell, str + 1);
}
