/*
** EPITECH PROJECT, 2023
** env function
** File description:
** it does like env in terminal, print env
*/

#include "minishell.h"

int env_function(char **arg, char **env)
{
    for (int count = 0; env[count] != NULL; count += 1) {
        my_printf("%s\n",env[count]);
    }
    return EPITECH_SUCCESS;
}
