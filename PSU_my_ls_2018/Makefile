##
## EPITECH PROJECT, 2018
## garysoko
## File description:
## garysoko
##
NAME	=	my_ls

SRC	=	src/main.c				\
		src/ls_l.c				\
		src/lsbase.c			\
		src/my_putchar.c\
		src/my_put_nbr.c\
		src/my_putstr.c\
		src/my_put_nbr_octal.c\
		src/my_put_nbr_binary.c\
		src/my_put_nbr_hexa.c\
		src/my_printf.c

CFLAGS	+=	-Wall -Wextra 

OBJ	=	$(SRC:.c=.o)

GCC	=	gcc -o

RM	=	rm -f

ASUPR2	=	my_ls

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(ASUPR2)

re:	fclean all

.PHONY: all clean fclean re
