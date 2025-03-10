#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*head;

	if (ac <= 1)
		exit(0);
	stack_a = ps_input(av, ac);
	// if (!stack_a)
	// {
	// 	write(2, "error", 5);
	// 	return (1);
	// }
	if (!ps_check_stack(stack_a))
	{
		ft_lstclear(&stack_a);
		write(2, "error\n", 6);
	}
	reverse(&stack_a, 1);
	head = stack_a;
	while (head)
	{
		ft_printf("stack_a -> %d\n", head->content);
		head = head->next;
	}
	ft_lstclear(&stack_a);
	free(stack_a);
	return (0);
}
