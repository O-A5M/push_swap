# push_swap variables

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
SRC = push_swap.c ps_parsing.c ps_parsing_utils.c ps_check_order.c ps_small_stack.c ps_algo.c ps_push.c ps_swap.c ps_reverse_rotate.c

OBJ = $(SRC:.c=.o)

# libft variables
LIBFT_D = libft
LIBFT_N = $(LIBFT_D)/libft.a

# ft_printf variables
PRINTF_D = $(LIBFT_D)/ft_printf
PRINTF_N = $(PRINTF_D)/libftprintf.a

# Rules
all: $(NAME)

$(LIBFT_N):
	$(MAKE) -C $(LIBFT_D) all

$(NAME): $(OBJ) $(LIBFT_N) $(PRINTF_N)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_N) $(PRINTF_N) -o $(NAME)

clean:
	$(MAKE) -C $(LIBFT_D) clean
	rm -rf $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_D) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean
.PRECIOUS: *.o
