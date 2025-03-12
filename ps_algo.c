#include "push_swap.h"

static int	ft_sqrt(int i)
{
	int	factors;

	factors = 1;
	while (factors * factors < i)
		factors++;
	return (factors);
}

static int	get_index(t_list *list, int nb)
{
	int	index;

	index = 0;
	while (list && list->index != nb)
	{
		list = list->next;
		index++;
	}
	return(index);
}

static void	from_b_to_a(t_list **stack_a, t_list **stack_b)
{
	int		index;
	int		i;

	i = ft_lstsize(*stack_b) - 1;
	while (i >= 0)
	{
		index = get_index(*stack_b, i);
		if (index <= ft_lstsize(*stack_b) / 2)
		{
			while ((*stack_b)->index != i)
				rotate(stack_b, 0);
		}
		else
		{
			while ((*stack_b)->index != i)
				reverse(stack_b, 0);
		}
		push (stack_a, stack_b, 1);
		i--;
	}
}

void	sort_list(t_list **stack_a, t_list **stack_b)
{
	int		range;
	int		i;

	range = ft_sqrt(ft_lstsize(*stack_a));
	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index < i)
		{
			push(stack_b, stack_a, 0);
			rotate(stack_b, 0);
			i++;
		}
		else if ((*stack_a)->index <= range + i)
		{
			push(stack_b, stack_a, 0);
			i++;
		}
		else
			rotate(stack_a, 1);
	}
	from_b_to_a(stack_a, stack_b);
}
