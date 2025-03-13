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

static void	dup_error(t_list **list)
{
	ft_lstclear(list);
	write(2, "Error\n", 6);
	exit (1);
}

int	ps_check_stack(t_list *stack)
{
	t_list	*current;
	t_list	*next;

	current = stack;
	while (current)
	{
		if (current->content > 2147483647
			|| current->content < -2147483648)
			dup_error(&stack);
		next = current->next;
		while (next)
		{
			if ((current->content) == (next->content))
				dup_error(&stack);
			next = next->next;
		}
		current = current->next;
	}
	return (1);
}

int	check_int_len(char *s)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		while (s[i] == '0' || s[i] == '-' || s[i] == '+')
			i++;
		while (s[i] <= '9' && s[i] >= '0')
		{
			i++;
			ret++;
		}
	}
	if (ret > 11)
		return (0);
	return (1);
}

int	ps_check_input(char *s)
{
	int	i;

	if (!((s[0] <= '9' && s[0] >= '0') || s[0] == '-' || s[0] == '+'))
		return (0);
	if ((s[0] == '-' || s[0] == '+') && s[1] == '\0')
		return (0);
	i = 1;
	while (s[i])
	{
		if ((s[i] <= '9' && s[i] >= '0'))
			i++;
		else
			return (0);
	}
	if (!check_int_len(s))
		return (0);
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
