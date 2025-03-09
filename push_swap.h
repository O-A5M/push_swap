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

#endif
