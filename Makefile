NAME = libft.a
CC = clang
CFLAGS = -Werror -Wall -Wextra
AR = ar
ARFLAGS = rcs
RM = rm -rf

SOURCES = ft_isalnum.c  ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c

OBJ = $(patsubst %.c,%.o,$(SOURCES))


$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

all: $(NAME)

%.o: $(SOURCES)
	$(CC) $(CFLAGS) -c $< -o $@

# .c.o:
# 	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
