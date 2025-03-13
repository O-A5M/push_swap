/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:17:45 by oakhmouc          #+#    #+#             */
/*   Updated: 2025/03/13 01:17:49 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **dst, t_list **src, int nb)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!src || !*src)
		return ;
	tmp = *dst;
	tmp1 = *src;
	*src = tmp1->next;
	*dst = tmp1;
	tmp1->next = tmp;
	if (nb == 1)
		ft_printf("pa\n");
	else if (nb == 0)
		ft_printf("pb\n");
}
