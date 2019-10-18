
SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c

SRCS	+= ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c

SRCS	+= ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c

SRCS	+= ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_calloc.c

B_SRCS	= $(SRCS)

B_SRCS	+= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c

B_SRCS	+= ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJS	= $(SRCS:.c=.o)

B_OBJS	= $(B_SRCS:.c=.o)

NAME	= libft.a

BONUS	= bonus_created

GCC		= gcc

FLAGS	= -Wall -Wextra -Werror

INCLUDEH	= -I libft.h



all:	$(NAME)

bonus: $(BONUS)

.PHONY:	clean fclean re bonus bench bclean

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(BONUS):	$(B_OBJS)
	ar -rcs $(NAME) $(B_OBJS)
	@touch bonus_created

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME) $(BONUS)

re: fclean all

%.o: %.c
	$(GCC) $(FLAGS) $(INCLUDEH) -c $<  -o $(<:.c=.o)

bench:
	@echo "Creating shared object 'libft.so' ..."
	@$(GCC) ${FLAGS} -shared -o libft.so -fPIC $(SRCS)
	@echo "libft.so created!"
