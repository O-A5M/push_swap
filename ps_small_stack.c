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

void	sort_four(t_list **stack_a, t_list **stack_b, int index)
{
	t_list	*tmp;
	int		i;

	tmp = *stack_a;
	i = 0;
	while (tmp->index != index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < 2)
	{
		while (*stack_a != tmp)
			rotate(stack_a, 1);
	}
	else
	{
		while (*stack_a != tmp)
			reverse(stack_a, 1);
	}
	push(stack_b, stack_a, 0);
	sort_three(stack_a);
	push(stack_a, stack_b, 1);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;

	tmp = *stack_a;
	i = 0;
	while (tmp->index != 0)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < 3)
	{
		while (*stack_a != tmp)
			rotate(stack_a, 1);
	}
	else
	{
		while (*stack_a != tmp)
			reverse(stack_a, 1);
	}
	push(stack_b, stack_a, 0);
	sort_four(stack_a, stack_b, 1);
	push(stack_a, stack_b, 1);
}
