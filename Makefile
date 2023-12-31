NAME = libftprintf.a

SRCS = 	ft_printf.c\
	ft_get_and_print_format.c\
 ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_printhex.c\
 ft_printptr.c\
 ft_printunsigned.c

OBJS		= $(SRCS:%.c=%.o)


FLAGS		= -Wall -Wextra -Werror

	
all: $(NAME)


$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c ft_printf.h
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re 