#include "push_swap.h"

t_list	*ps_input(char **input, int ac)
{
	int	i;
	int	val;
	t_list	*lst_input;

	i = 1;
	lst_input = NULL;
	if (!ps_dup_check(input, ac))
		return (NULL);
	while (i < ac)
	{
		if (ps_check_input(input[i]))
		{
			val = atoi(input[i]);
			ft_lstadd_back(&lst_input, ft_lstnew(val));
		}
		else
		{
			ft_lstclear(&lst_input);
			return (NULL);
		}
		i++;
	}
	return (lst_input);
}
