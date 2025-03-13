/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:58:37 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/12 23:58:42 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static int	check_order_three(t_list *tmp)
{
	while (tmp->next)
	{
		if (tmp->content > (tmp->next)->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
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
		while ((*stack_a)->index != index)
			rotate(stack_a, 1);
	}
	else
	{
		while ((*stack_a)->index != index)
			reverse(stack_a, 1);
	}
	push(stack_b, stack_a, 0);
	if (!check_order_three(*stack_a))
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
		while ((*stack_a)->index != 0)
			rotate(stack_a, 1);
	}
	else
	{
		while ((*stack_a)->index != 0)
			reverse(stack_a, 1);
	}
	push(stack_b, stack_a, 0);
	sort_four(stack_a, stack_b, 1);
	push(stack_a, stack_b, 1);
}
