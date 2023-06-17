##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC	=	my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_strlen.c \
		my_strdup.c \
		printf/main_function/check_flags.c \
		printf/main_function/function_pointers.c \
		printf/main_function/call_flag.c \
		printf/main_function/call_flag2.c \
		printf/main_function/call_flag3.c \
		printf/main_function/my_printf.c \
		printf/flags/percent_flag.c \
		printf/flags/b_flag.c \
		printf/flags/o_flag.c \
		printf/flags/p_flag.c \
		printf/flags/u_flag.c \
		printf/flags/x_flag.c \
		printf/flags/x_flag_upcase.c \
		printf/flags/s_flag_printable.c

OBJ	=	$(SRC:.c=.o)

NAME	=	lib

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	mkdir -p ../../include/
	cp lib.h ../../include

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
