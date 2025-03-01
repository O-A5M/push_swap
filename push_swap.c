#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;

	stack_a = ps_input(av, ac);
	if (!stack_a)
	{
		write(2, "error", 5);
		return (1);
	}
	while (stack_a)
	{
		ft_printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}
	ft_lstclear(&stack_a, clear_list);
	return (0);
}
