NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar
ARFLAGS = rcs
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_bzero.c ft_toupper.c ft_tolower.c ft_atoi.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_strnstr.c ft_strdup.c \
		ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
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