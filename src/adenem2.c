#include "../include/minishell.h"

void	cont_comnd(t_put_cmd	*local, t_shell *shell)
{
	local->tmp = get_parse_node(shell->parse_head, local->j);
	if (local->tmp != NULL && local->cmnds != NULL)
	{
		local->cmnds->cmd = malloc(sizeof(char *) * (local->arg_len + 1));
		if (!local->cmnds->cmd)
			return ;
		secondloop(local);
		local->cmnds->cmd[local->i] = NULL;
		local->cmnds = local->cmnds->next;
	}
}
