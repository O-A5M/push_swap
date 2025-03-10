#include "push_swap.h"

static void	exit_error(char **input, t_list **lst)
{
	free_array(input);
	ft_lstclear(lst);
	exit (1);
}

t_list	*ps_input(char **input, int ac)
{
	char	**splited_input;
	t_list	*input_lst;
	int		i;
	int		j;

	i = 1;
	input_lst = NULL;
	while (i < ac)
	{
		splited_input = ft_split(input[i], ' ');
		if (!splited_input)
			exit (1);
		j = 0;
		while (splited_input[j])
		{
			if (ps_check_input(splited_input[j]))
				ft_lstadd_back(&input_lst, ft_lstnew(ft_atoi(splited_input[j])));
			else if (!ps_check_input(splited_input[j]) || !ps_check_stack(input_lst))
				exit_error(splited_input, &input_lst);
			j++;
		}
		free_array(splited_input);
		i++;
	}
	return (input_lst);
}
