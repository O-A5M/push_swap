#include "push_swap.h"

t_list	*ps_input(char **input, int ac)
{
	int			i;
	long int	val;
	char		**splited_input;
	t_list		*lst_input;

	i = 0;
	lst_input = NULL;
	if (ac == 2)
		splited_input = ft_split(input[1], ' ');
	else
		splited_input = splite_input(input, ac);
	while (splited_input[i])
	{
		if (ps_check_input(splited_input[i]))
		{
			val = ft_atoi(splited_input[i]);
			ft_lstadd_back(&lst_input, ft_lstnew(val));
		}
		else
		{
			ft_lstclear(&lst_input);
			return (NULL);
		}
		i++;
	}
	if (!ps_check_stack(lst_input))
	{
		ft_lstclear(&lst_input);
		lst_input = NULL;
	}
	free_array(splited_input);
	free(splited_input);
	return (lst_input);
}
