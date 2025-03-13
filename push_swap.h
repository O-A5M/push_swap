/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:56:47 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/12 23:56:54 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"

t_list	*ps_input(char **input, int ac);
int		ps_check_stack(t_list *stack);
int		ps_check_input(char *s);
void	clear_list(void	*node);
char	**splite_input(char **input, int ac);
void	free_array(char **array);
void	swap(t_list **stack, int nb);
void	swap_s(t_list **stack_a, t_list **stack_b);
void	push(t_list **dst, t_list **src, int nb);
void	rotate_r(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **stack, int nb);
void	reverse(t_list **stack, int nb);
void	reverse_r(t_list **stack_a, t_list **stack_b);
int		check_order(t_list **stack);
void	index_stack(t_list **stack);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b, int index);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_list(t_list **stack_a, t_list **stack_b);

#endif
