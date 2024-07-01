#include "../include/minishell.h"

void	is_first_builtin(t_shell *shell, t_exec_node *ex)
{
	set_io(ex);
	builtin_run(ex, shell);
	ft_dup_rev(ex);
}
