#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*head;

	stack_a = ps_input(av, ac);
	head = stack_a;
	if (!stack_a)
	{
		write(2, "error", 5);
		return (1);
	}
	while (head)
	{
		ft_printf("%d\n", head->content);
		head = head->next;
	}
	ft_lstclear(&stack_a);
	free(stack_a);
	return (0);
}