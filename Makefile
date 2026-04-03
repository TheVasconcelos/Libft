NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

RM = rm -f

SRC = $(shell find src -name "*.c")
OBJ = $(SRC:src/%.c=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

obj/%.o: src/%.c libft.h
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $(shell find src -name "$*.c") -o $@

clean:
	$(RM) -r obj

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re