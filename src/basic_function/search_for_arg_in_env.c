/*
** EPITECH PROJECT, 2023
** search for arg in env
** File description:
** it search the name given in env
*/

#include "minishell.h"

int search_str(char *str, char *str2, int len)
{
    for (int count = 0; count != (len - 1); count += 1) {
        if (str[count] != str2[count])
            return EPITECH_ERROR;
    }
    return EPITECH_SUCCESS;
}

int search_for_arg_in_env(char *arg, char **env)
{
    int len_env = count_arg_len(env);
    int len_arg = my_strlen(arg);
    for (int count_env = 0; count_env != len_env; count_env += 1) {
        if (search_str(arg, env[count_env], len_arg) == EPITECH_SUCCESS)
            return count_env;
    }
    return FAILURE2;
}
