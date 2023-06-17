##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## it does make
##

SRCDIR 		=  ./src

SRC_MAIN	=	main.c

SRC			=	basic_function/my_str_to_word_array.c			\
				basic_function/path_str_to_word_array.c			\
				basic_function/compare_string.c					\
				basic_function/copy_env.c						\
				basic_function/clear_buff.c						\
				basic_function/clear_path.c						\
				basic_function/count_arg_len.c					\
				basic_function/search_for_arg_in_env.c			\
				basic_function/linked_list.c					\
				basic_function/check_if_pipe_exist.c			\
				basic_function/check_if_semi_exist.c			\
				basic_function/reset_buff_content.c				\
				basic_function/transform_buff.c					\
				basic_function/read_user_stdin.c				\
				basic_function/check_end_of_pipe.c				\
				basic_function/check_space_pipe.c				\
				basic_function/end_counter_change.c				\
				basic_function/strlen_in_str.c					\
				basic_function/close_all_fd.c					\
				basic_function/pipe_str_array.c					\
				basic_function/semi_str_array.c					\
				basic_function/put_in_word_array.c				\
				command/env_function.c							\
				command/setenv/setenv_function.c				\
				command/setenv/setenv_handling.c				\
				command/unsetenv_function.c						\
				command/cd_function/cd_function.c				\
				command/cd_function/search_for_old_pwd.c		\
				command/cd_function/search_for_pwd.c			\
				command/cd_function/replace_old_pwd.c			\
				command/cd_function/replace_pwd.c				\
				command/cd_function/tild_arg.c					\
				command/cd_function/dash_cd.c					\
				command/exit_function.c							\
				execute_pipe.c									\
				actions.c										\
				binary_command.c								\
				error_handling.c								\
				minishell.c

OBJ			=	$(addprefix src/, $(SRC:.c=.o))

OBJ_TEST	=	$(addprefix src/, $(SRC_MAIN:.c=.o))

NAME		=	mysh

LDFLAGS		=	-L ./lib

LDLIBS		=	-lmy

LDCRI		= 	--coverage -lcriterion

CFLAGS		=	-I ./include

LIB			=	./lib/libmy.a

UNIT 		= 	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_TEST)
	make -C ./lib/my
	gcc -o $@ $(OBJ) $(OBJ_TEST) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my

re:     fclean all

unit_tests: fclean $(OBJ)
	gcc -o $(UNIT) $(OBJ) $(CFLAGS) $(LDFLAGS) $(LDLIBS) $(LDCRI)

tests_run: unit_tests
	./unit_tests

run_tests: unit_tests
	./unit_tests

debug: $(LIB) $(OBJ)
	gcc -o $@ $(OBJ) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

.PHONY: all clean fclean re unit_tests tests_run run_tests debug
