#include "push_swap.h"

void    swap(t_list **stack, int nb)
{
    t_list  *tmp;
    t_list  *tmp2;

    if (!*stack || ft_lstsize(*stack) <= 1)
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

void    swap_s(t_list **stack_a, t_list **stack_b)
{
    swap(stack_a, 2);
    swap(stack_b, 2);
    ft_printf("ss\n");
}

void    push(t_list **dst, t_list **src, int nb)
{
    t_list  *tmp;
    t_list  *tmp1;

    if (!*src)
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

void    rotate(t_list **stack, int nb)
{
    t_list  *tmp;

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

void    rotate_r(t_list **stack_a, t_list **stack_b)
{
    rotate(stack_a, 2);
    rotate(stack_b, 2);
    ft_printf("rr\n");
}

t_list  *ft_lstbeforelast(t_list *list)
{
    if (!list)
        return (NULL);
    while (list->next->next)
        list = list->next;
    return (list);
}

void    reverse(t_list **stack, int nb)
{
    t_list  *tmp;
    t_list  *tmp1;

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

void    reverse_r(t_list **stack_a, t_list **stack_b)
{
    reverse(stack_a, 2);
    reverse(stack_b, 2);
    ft_printf("rrr\n");
}
