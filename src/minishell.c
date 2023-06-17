/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell
*/

#include <stdbool.h>
#include "minishell.h"

int minishell(char **env)
{
    global_struct_t *global = malloc(sizeof(global_struct_t));
    global->buff_content = malloc(sizeof(buff_content_t));
    global->env = env;
    struct stat s;
    fstat(0, &s);
    while (1) {
        if (!S_ISFIFO(s.st_mode))
            write(1, "$> ", 3);
        reset_buff_content(global->buff_content);
        if (read_user_stdin(global->buff_content) == EPITECH_ERROR)
            return EPITECH_ERROR;
        transform_buff(global, global->buff_content, global->env);
        if (can_do_action(global, global->env) == FAILURE2)
            return SUCCESS;
    }
}
