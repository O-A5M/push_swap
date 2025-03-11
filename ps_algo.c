#include "push_swap.h"

int	ft_sqrt(int i)
{
	int	factors;

	factors = 1;
	while (factors * factors < i)
		factors++;
	return (factors);
}

void	from_b_to_a(t_list **stack_a, t_list **stack_b)
{
	 t_list	*tmp;
	int		index;
	int		len;
	int		i;

	len = ft_lstsize(*stack_b);
	i = len - 1;
	while (i > 0)
	{
		tmp = *stack_b;
		index = 0;
		while (tmp && tmp->index != i)
		{
			tmp = tmp->next;
			index++;
		}
		// if (index < ft_lstsize(*stack_b) / 2)
		// {
			while (index > 0)
			{
				rotate(stack_b, 0);
				index--;
			}
			push (stack_a, stack_b, 1);
		// }
		// else /*if (index > ft_lstsize((*stack_b)) && index < ft_lstsize((*stack_b)) / 2)*/
		// {
		// 	while (*(stack_b) && (*stack_b)->index != i)
		// 		reverse(stack_b, 0);
		// 	push (stack_a, stack_b, 1);
		// }
		i--;
	}
}

void	sort_list(t_list **stack_a, t_list **stack_b)
{
	int		range;
	int		i;
	// t_list	*(*stack_b);

	range = ft_sqrt(ft_lstsize(*stack_a));
	// (*stack_b) = *stack_a;
	i = 0;
	while (*stack_a)
	{
		// (*stack_b) = *stack_a;
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
		// else if ((*stack_b)->index < i)
		// {
		// 	push(stack_b, stack_a, 0);
		// 	rotate(stack_b, 0);
		// 	i++;
		// }
		else
			rotate(stack_a, 1);
		// (*stack_b) = (*stack_b)->next;
	}
	from_b_to_a(stack_a, stack_b);
}
