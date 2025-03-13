/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:18:02 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/13 01:18:27 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, int nb)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!stack || !*stack || ft_lstsize(*stack) <= 1)
		return ;
	tmp = *stack;
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*stack = tmp2;
	if (nb == 1)
		ft_printf("sa\n");
	else if (nb == 0)
		ft_printf("sb\n");
}

void	swap_s(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a, 2);
	swap(stack_b, 2);
	ft_printf("ss\n");
}
