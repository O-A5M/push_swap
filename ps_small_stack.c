#include "push_swap.h"

static void	swap_reverse(t_list **stack)
{
	swap(stack, 1);
	rotate(stack, 1);
}

void	sort_three(t_list **stack_a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *stack_a;
	tmp2 = tmp1->next;
	if (tmp1->content < tmp2->content && tmp1->content < tmp2->next->content)
		swap_reverse(stack_a);
	else if (tmp1->content > tmp2->content
		&& tmp1->content > tmp2->next->content)
	{
		if (tmp2->content < tmp2->next->content)
			rotate(stack_a, 1);
		else
		{
			swap(stack_a, 1);
			reverse(stack_a, 1);
		}
	}
	else
	{
		if (tmp2->content < tmp2->next->content)
			swap(stack_a, 1);
		else
			reverse(stack_a, 1);
	}
}

