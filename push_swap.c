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

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	if (ac <= 1)
		exit(0);
	stack_a = ps_input(av, ac);
	check_order(&stack_a);
	index_stack(&stack_a);
	if (ac == 3)
		swap(&stack_a, 1);
	else if (ac == 4)
		sort_three(&stack_a);
	else if (ac == 5)
		sort_four(&stack_a, &stack_b, 0);
	else if (ac == 6)
		sort_five(&stack_a, &stack_b);
	else
		sort_list(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	free(stack_a);
	return (0);
}
