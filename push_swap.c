/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:58:51 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/12 23:58:53 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

int	main(int ac, char **agv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	if (ac <= 1)
		exit(0);
	stack_a = ps_input(agv, ac);
	if (!stack_a)
		error_message();
	ps_check_stack(stack_a);
	check_order(&stack_a);
	index_stack(&stack_a);
	if (ft_lstsize(stack_a) == 2)
		swap(&stack_a, 1);
	else if (ft_lstsize(stack_a) == 3)
		sort_three(&stack_a);
	else if (ft_lstsize(stack_a) == 4)
		sort_four(&stack_a, &stack_b, 0);
	else if (ft_lstsize(stack_a) == 5)
		sort_five(&stack_a, &stack_b);
	else
		sort_list(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	free(stack_a);
	return (0);
}
