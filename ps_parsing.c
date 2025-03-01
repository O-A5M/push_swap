#include "push_swap.h"

t_list	*ps_input(char **input, int ac)
{
	int	i;
	int	*val_a;
	int	val;
	t_list	*lst_input;

	i = 1;
	lst_input = NULL;
	if (!ps_dup_check(input, ac))
		return (NULL);
	val_a = malloc(sizeof(int *));
	if (!val_a)
		return (NULL);
	while (i < ac)
	{
		if (ps_check_input(input[i]))
		{
			val = atoi(input[i]);
			*val_a = val;
			ft_lstadd_back(&lst_input, ft_lstnew(val_a));
		}
		else
		{
			ft_lstclear(&lst_input, clear_list);
			return (NULL);
		}
		i++;
	}
	free(val_a);
	return (lst_input);
}
