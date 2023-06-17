/*
** EPITECH PROJECT, 2023
** exit function
** File description:
** it does like exit, but it's mine
*/

#include "minishell.h"

int exit_function(char **arg, char **env, buff_content_t *buff_content)
{
    if (compare_string(arg[0], "exit") == EPITECH_SUCCESS) {
        for (int count = 0; arg[count] != NULL; count += 1) {
            free(arg[count]);
        }
        free(arg);
        for (int count = 0; env[count] != NULL; count += 1) {
            free(env[count]);
        }
        free(env);
        free(buff_content->buff);
        my_printf("exit\n");
        return EPITECH_SUCCESS;
    }
    return EPITECH_ERROR;
}
