/*
** EPITECH PROJECT, 2022
** minishell h
** File description:
** minishell h
*/

#ifndef minishell_
    #define minishell_

    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <signal.h>
    #include <stdbool.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include "lib.h"
    #include "basic_functions.h"
    #include "command.h"

    #define EPITECH_SUCCESS 0
    #define SUCCESS 0
    #define BEGINNING 0
    #define EPITECH_ERROR 84
    #define FAILURE 84
    #define FAILURE2 -1
    #define LEN_OLDPWD 3
    #define NEW_LINE 1
    #define NULL_LINE 1
    #define EQUAL 1
    #define END_FD (tmp->count_pipe - 1)
    #define COUNT_FD (count - 1)

    #define CONTENT buff_content
    #define BUFF buff_content->buff
    #define BUFF_ARRAY buff_content->arg->arg_in_array
    #define BUFF_LIST buff_content->arg
    #define TMP_LIST tmp->arg
    #define BUFF_END buff_content->count_end
    #define BUFF_START buff_content->count_start
    #define BUFF_PIPE_COUNT buff_content->count_pipe
    #define GLB global

int minishell(char **env);
int error_handling(int argc, char **argv);
int transform_buff(global_struct_t *global,
buff_content_t *buff_content, char **env);
int binary_command(char **arg, char **env);
int can_do_action(global_struct_t *global, char **env);
int action_to_do(buff_content_t *buff_content, char **arg, char **env);
char **action_in_env(buff_content_t *buff_content , char **env);

#endif /* !antman */
