#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"

t_list	*ps_input(char **input, int ac);
int		ps_dup_check(char **s, int ac);
int		ps_check_input(char *s);
void	clear_list(void	*node);

#endif
