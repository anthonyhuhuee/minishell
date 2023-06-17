/*
** EPITECH PROJECT, 2023
** unsetven function
** File description:
** un set line in env
*/

#include "minishell.h"

char **remove_arg_in_env(char *arg, char **env, int arg_in_env)
{
    char **result_env = copy_env(env);
    int len_env = (count_arg_len(env) - 1);
    int len_last_line = my_strlen(result_env[len_env]);
    if (len_env != arg_in_env) {
        free(result_env[arg_in_env]);
        result_env[arg_in_env] = malloc(sizeof(char) * (len_last_line + 1));
        result_env[arg_in_env][0] = '\0';
        my_strcpy(result_env[arg_in_env], result_env[len_env]);
    }
    free(result_env[len_env]);
    result_env[len_env] = NULL;
    free(result_env[len_env + 1]);
    for (int count = 0; env[count] != NULL; count += 1)
        free(env[count]);
    free(env);
    return result_env;
}

char **unsetenv_function(char **arg, char **env)
{
    int len_arg = count_arg_len(arg);
    if (len_arg == 1) {
        my_printf("unsetenv: Too few arguments.\n");
        return env;
    }
    int arg_in_env;
    for (int count_arg = 1; count_arg != len_arg; count_arg += 1) {
        arg_in_env = search_for_arg_in_env(arg[count_arg], env);
        if (arg_in_env != FAILURE2)
            env = remove_arg_in_env(arg[count_arg], env, arg_in_env);
    }
    return env;
}
