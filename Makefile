# push_swap variables needed for compilation

CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
NAME = push_swap
SRC = push_swap.c ps_parsing.c ps_parsing_utils.c ps_check_order.c ps_small_stack.c ps_algo.c ps_push.c ps_swap.c ps_reverse_rotate.c

# libft variables for libft compilation

LIBFT_D = libft
LIBFT_N = libft.a

# ft_printf variables

PRINTF_D = $(LIBFT_D)/ft_printf
PRINTF_N = libftprintf.a

# rules

all: $(LIBFT_N) $(NAME)

$(LIBFT_N):
	$(MAKE) -C $(LIBFT_D) all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(LIBFT_D)/$(LIBFT_N) $(PRINTF_D)/$(PRINTF_N) -o $(NAME)

clean:
	$(MAKE) -C $(LIBFT_D) clean
	rm -rf *.o

fclean: clean
	$(MAKE) -C $(LIBFT_D) fclean
	rm -rf *.o $(NAME)

re: fclean all
