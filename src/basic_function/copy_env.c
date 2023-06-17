/*
** EPITECH PROJECT, 2023
** copy env
** File description:
** it copy env
*/

#include "minishell.h"




char **copy_env(char **env)
{
    int nb_line_env = 0;
    for (nb_line_env; env[nb_line_env] != NULL; nb_line_env += 1) {
    }
    char **result = malloc(sizeof(char *) * (nb_line_env + 1));
    for (int count = 0; env[count] != NULL; count += 1) {
        result[count] = malloc(sizeof(char) * (my_strlen(env[count]) + 1));
        result[count][0] = '\0';
        my_strcpy(result[count], env[count]);
    }
    result[nb_line_env] = NULL;
    return result;
}
