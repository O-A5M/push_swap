#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*head;

	if (ac <= 1)
		exit(0);
	stack_a = ps_input(av, ac);
	index_stack(&stack_a);
	sort_three(&stack_a);
	head = stack_a;
	while (head)
	{
		ft_printf("%d\n", head->content);
		head = head->next;
	}
	ft_lstclear(&stack_a);
	free(stack_a);
	return (0);
}
