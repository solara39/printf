
NAME	= libftprintf.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_printf.c ft_count_output.c	ft_strdup.c ft_handle_char.c ft_strlen.c ft_handle_hexa.c ft_tolower_str.c ft_handle_integer.c ft_treat_args.c ft_handle_point.c ft_treat_specifier.c ft_handle_string.c ft_toupper_str.c ft_itoa.c ft_putstr_fd.c ft_putchr_fd.c ft_changebase_tohexa.c ft_handle_unit.c
OBJS	= $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re clean
