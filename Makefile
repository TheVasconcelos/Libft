NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

RM = rm -f

SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

obj/%.o: src/%.c libft.h
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) obj/*.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re