/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:58:12 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/12 23:58:16 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	exit_error(char **input, t_list **lst)
{
	free_array(input);
	ft_lstclear(lst);
	write(2, "Error\n", 6);
	exit (1);
}

static void	exit_error_malloc(char **splite)
{
	if (splite)
		free_array(splite);
	write(2, "Error\n", 6);
	exit (1);
}

t_list	*ps_input(char **input, int ac)
{
	char	**splite;
	t_list	*lst;
	int		i;
	int		j;

	i = 1;
	lst = NULL;
	while (i < ac)
	{
		splite = ft_split(input[i], ' ');
		if (!splite || splite[0] == NULL)
			exit_error_malloc(splite);
		j = 0;
		while (splite[j])
		{
			if (ps_check_input(splite[j]))
				ft_lstadd_back(&lst, ft_lstnew(ft_atoi(splite[j])));
			else if (!ps_check_input(splite[j]))
				exit_error(splite, &lst);
			j++;
		}
		free_array(splite);
		i++;
	}
	return (lst);
}
