#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"

t_list	*ps_input(char **input, int ac);
int		ps_check_stack(t_list *stack);
int		ps_check_input(char *s);
void	clear_list(void	*node);
char	**splite_input(char **input, int ac);
void	free_array(char **array);
void    swap(t_list **stack, int nb);
void    swap_s(t_list **stack_a, t_list **stack_b);
void	push(t_list **dst, t_list **src, int nb);
void    rotate_r(t_list **stack_a, t_list **stack_b);
void    rotate(t_list **stack, int nb);
void    reverse(t_list **stack, int nb);
void    reverse_r(t_list **stack_a, t_list **stack_b);

#endif
