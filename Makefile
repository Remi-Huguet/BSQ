##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CFLAGS =	-W -Wall -Wextra

SRC =           src/main.c		\
                src/bsq.c		\
                src/find_square.c	\
		src/put_square.c	\
                src/fct.c

OBJ =		$(SRC:.c=.o)

NAME =		bsq

all:            $(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) 

clean:
		$(RM) $(OBJ)

fclean: 	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: 	re fclean clean all
