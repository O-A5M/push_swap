# push_swap variables needed for compilation

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
SRC = push_swap.c ps_parsing.c

# libft variables for libft compilation

LIBFT_D = libft
LIBFT_N = libft.a

# rules

all: $(LIBFT_N) $(NAME)

$(LIBFT_N):
	$(MAKE) -C $(LIBFT_D) all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(MAKE) -C $(LIBFT_D) clean
	rm -rf *.o

fclean: clean
	$(MAKE) -C $(LIBFT_D) fclean
	rm -rf *.o $(NAME)

re: fclean all
