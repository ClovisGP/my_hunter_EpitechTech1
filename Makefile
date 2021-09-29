##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## description
##
SRC   	=	./my_hunter_creation_media.c	\
			./my_hunter_creation_media_2.c	\
			./my_hunter_event.c		\
			./my_hunter_destroy_media.c		\
			./my_hunter_mouvement.c 		\
			./my_hunter.c					\
			./main.c

SRCLIB     =	./lib/my/my_putchar.c                   \
                ./lib/my/my_put_nbr.c                   \
				./lib/my/my_putstr.c                    \
				./lib/my/my_put_nbr_in_bi.c     \
                ./lib/my/my_put_unsigned_int.c  \
				./lib/my/my_revstr.c                    \
                ./lib/my/my_strlen.c                    \
				./lib/my/stockage1_my_printf.c  \
				./lib/my/stockage2_my_printf.c  \
                ./lib/my/stockage3_my_printf.c  \
				./lib/my/my_decimal_to_octal.c  \
                ./lib/my/my_put_nbr_in_hex.c    \
				./lib/my/my_atoi.c				\
				./lib/my/my_put_board.c			\
				./lib/my/my_int_to_str.c		\
                ./lib/my/my_printf.c


OBJ	=	$(SRC:.c=.o)

OBJLIB =	$(SRCLIB:.c=.o)

NAME	=	./my_hunter

NAMELIB		=	./libmy.a


all:	$(NAMELIB) $(NAME)

$(NAMELIB):	$(OBJLIB)
	ar -rc $(NAMELIB) $(OBJLIB)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(NAMELIB) -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

clean:
	rm -f $(OBJ) $(OBJLIB)

fclean: clean
	rm -f $(NAME) $(NAMELIB)

re: fclean all
