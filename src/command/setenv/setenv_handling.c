/*
** EPITECH PROJECT, 2023
** setenv_handling
** File description:
** setenv_handling
*/

#include "minishell.h"

int isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') ||
    (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}

int setenv_handling(int len_arg, char **arg, char **env)
{
    if (len_arg == 1) {
        env_function(arg, env);
        return FAILURE;
    }
    if (len_arg >= 4) {
        my_printf("setenv: Too many arguments.\n");
        return FAILURE;
    }
    if (isalnum(arg[1][0]) == 0) {
        my_printf("setenv: Variable name must begin with a letter.\n");
        return FAILURE;
    }
    for (int count = 0; arg[1][count] != '\0'; count += 1) {
        if (isalnum(arg[1][count]) == 0) {
            my_printf("setenv: Variable name must contain");
            my_printf("alphanumeric characters.\n");
            return FAILURE;
        }
    }
}
