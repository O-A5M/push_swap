#include "push_swap.h"

int	check_order(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->content > (tmp->next)->content)
			return (0);
		tmp = tmp->next;
	}
	ft_lstclear(stack);
	exit(0);
}

static void	set_to_zero(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while(tmp)
	{
		tmp->index = 0;
		tmp = tmp->next;
	}
}

void	index_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;

	set_to_zero(stack);
	tmp = *stack;
	while (tmp)
	{
		tmp1 = *stack;
		while (tmp1)
		{
			if (tmp->content > tmp1->content)
				tmp->index++;
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}
