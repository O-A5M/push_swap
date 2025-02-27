#include "push_swap.h"

static void	clear_list(void	*node)
{
	free(node);
}

static int	ps_check_input(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] <= '9' && s[i] >= '0')
			i++;
		else
			return (0);
	}
	return (1);
}

t_list	ps_input(char **input, int ac)
{
	int	i;
	t_list	lst_input;

	i = 1;
	lst_input = NULL;
	if (!ps_dup_check(input, ac))
		return (NULL);
	while (i < ac)
	{
		if (ps_check_input(input[i]))
			ft_lstadd_back(lst_input, ft_lstnew(atoi(input[i])));
		else
		{
			ft_lstclear(&lst_input, clear_list);
			return (NULL);
		}
		i++;
	}
	return (lst_input);
}
