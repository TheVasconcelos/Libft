NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs 

RM = rm -f

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isprint.c \
      ft_isascii.c \
      ft_strlen.c  \
      ft_atoi.c    \
      ft_strncmp   \
      ft_strcpy    \
      ft_memset    \
      ft_bzero     \
      ft_strlcat   \
      

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re