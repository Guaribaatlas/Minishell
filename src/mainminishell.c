#include "../inc/minishell.h"


void	ft_main_init(t_env *env)
{
	env->var = NULL;
	env->len = 0;
	env->pos = 0;
}

int main(void)
{
	t_env		env;
	t_minishell	shell;
	t_list		*lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (0);
	ft_main_init(&env);
	minishell_sklt(&env, &shell);
}