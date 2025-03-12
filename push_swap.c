#include "push_swap.h"

// hadchi kaaaamel makhedamch 

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	if (ac <= 1)
		exit(0);
	stack_a = ps_input(av, ac);
	check_order(&stack_a);
	index_stack(&stack_a);
	if (ft_lstsize(stack_a) == 3)
		swap(&stack_a, 1);
	if (ft_lstsize(stack_a) == 4)
		sort_three(&stack_a);
	else if (ft_lstsize(stack_a) == 5)
		sort_four(&stack_a, &stack_b, 0);
	else if (ft_lstsize(stack_a) == 6)
		sort_five(&stack_a, &stack_b);
	else
		sort_list(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	free(stack_a);
	return (0);
}
