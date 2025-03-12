#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	//  t_list	*head;

	stack_b = NULL;
	if (ac <= 1)
		exit(0);
	stack_a = ps_input(av, ac);
	// check_order(stack_a);
	index_stack(&stack_a);
	sort_list(&stack_a, &stack_b);
	//  head = stack_a;
	//  while (head)
	//  {
	// 	ft_printf("%d\n", head->content);
	//  	head = head->next;
	//  }
	//  while (stack_b)
	//  {
	// 	ft_printf("stack_b %d\n", stack_b->content);
	// 	stack_b = stack_b->next;
	//  }

	ft_lstclear(&stack_a);
	free(stack_a);
	return (0);
}
