/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:57:42 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/13 01:08:35 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, int nb)
{
	t_list	*tmp;

	if (!stack)
		return ;
	tmp = ft_lstlast(*stack);
	tmp->next = *stack;
	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	if (nb == 1)
		ft_printf("ra\n");
	else if (nb == 0)
		ft_printf("rb\n");
}

void	rotate_r(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	rotate(stack_a, 2);
	rotate(stack_b, 2);
	ft_printf("rr\n");
}

t_list	*ft_lstbeforelast(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next->next)
		list = list->next;
	return (list);
}

void	reverse(t_list **stack, int nb)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!stack)
		return ;
	tmp = ft_lstbeforelast(*stack);
	tmp1 = ft_lstlast(*stack);
	tmp1->next = *stack;
	*stack = tmp1;
	tmp->next = NULL;
	if (nb == 1)
		ft_printf("rra\n");
	else if (nb == 0)
		ft_printf("rrb\n");
}

void	reverse_r(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	reverse(stack_a, 2);
	reverse(stack_b, 2);
	ft_printf("rrr\n");
}
