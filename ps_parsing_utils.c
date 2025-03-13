/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:58:25 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/12 23:58:27 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_stack(t_list *stack)
{
	t_list	*current;
	t_list	*next;

	current = stack;
	while (current)
	{
		if (current->content > 2147483647
			|| current->content < -2147483648)
			return (0);
		next = current->next;
		while (next)
		{
			if ((current->content) == (next->content))
				return (0);
			next = next->next;
		}
		current = current->next;
	}
	return (1);
}

void	clear_list(void	*node)
{
	free(node);
}

int	ps_check_input(char *s)
{
	int	i;

	if (!((s[0] <= '9' && s[0] >= '0') || s[0] == '-' || s[0] == '+'))
		return (0);
	i = 1;
	while (s[i])
	{
		if ((s[i] <= '9' && s[i] >= '0'))
			i++;
		else
			return (0);
	}
	return (1);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
