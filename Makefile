##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Makefile
##

NAME	= 	bsq

SRC	=	lib/my_puterror.c	\
		lib/my_getnbr.c	\
		lib/my_putstr.c	\
		src/final_map.c	\
		src/change_dot.c	\
		src/str_to_word_array.c	\
		src/open_file.c	\
		src/main.c



OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I./include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
