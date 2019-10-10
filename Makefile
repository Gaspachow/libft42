
SRCS	= $(wildcard ft_*.c)

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

GCC		= gcc

FLAGS	= -Wall -Wextra -Werror

INCLUDEH	= -I libft.h



all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(GCC) $(FLAGS) $(INCLUDEH) -c $<  -o $(<:.c=.o)