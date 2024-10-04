NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar
ARFLAGS = rcs
SRC = $(filter-out *_bonus.c, $(wildcard *.c))
BONUS_SRC = $(wildcard *_bonus.c)
OBJ = *.o
BONUS_OBJ = *_bonus.o

all:$(NAME)


$(NAME): $(OBJ) $(BONUS_OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) $< -o $@

bonus: $(BONUS_OBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

clean:
	rm -f $(OBJ) $(BONUS_OBJ) *.ghc

fclean: clean
	rm -f $(NAME)

re: fclean all