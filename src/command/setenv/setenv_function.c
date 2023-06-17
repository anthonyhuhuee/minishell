/*
** EPITECH PROJECT, 2023
** setenv function
** File description:
** it set a new line in env
*/

#include <stdbool.h>
#include "minishell.h"

char **create_new_line(char *arg, char **env)
{
    int len_env = count_arg_len(env);
    int len_arg = my_strlen(arg);
    char **result_env = malloc(sizeof(char *) * (len_env + NEW_LINE + 1));
    for (int count = 0; count != len_env; count += 1) {
        result_env[count] = malloc(sizeof(char) * (my_strlen(env[count]) + 1));
        result_env[count][0] = '\0';
        my_strcat(result_env[count], env[count]);
    }
    result_env[len_env] = malloc(sizeof(char) * (len_arg + EQUAL + 1));
    my_strcpy(result_env[len_env], arg);
    my_strcat(result_env[len_env], "=");
    result_env[len_env + NEW_LINE] = NULL;
    for (int count = 0; env[count] != NULL; count += 1)
        free(env[count]);
    free(env);
    return result_env;
}

char **insert_arg_in_new_line(char **arg, char **env, bool line_exist,
int arg_pos)
{
    int pos_line_env;
    if (line_exist == false) {
        pos_line_env = (count_arg_len(env) - NULL_LINE);
    } else {
        pos_line_env = arg_pos;
    }
    int len_arg = (my_strlen(arg[1]) + my_strlen(arg[2]) + EQUAL);
    free(env[pos_line_env]);
    env[pos_line_env] = malloc(sizeof(char) * (len_arg + 1));
    env[pos_line_env][0] = '\0';
    my_strcpy(env[pos_line_env], arg[1]);
    my_strcat(env[pos_line_env], "=");
    my_strcat(env[pos_line_env], arg[2]);
    return env;
}

char **setenv_function(char **arg, char **env)
{
    int len_arg = count_arg_len(arg);
    bool line_exist = false;
    if (setenv_handling(len_arg, arg, env) == FAILURE)
        return env;
    int arg_pos = search_for_arg_in_env(arg[1], env);
    if (arg_pos != FAILURE2) {
        line_exist = true;
        insert_arg_in_new_line(arg, env, line_exist, arg_pos);
        return env;
    }
    env = create_new_line(arg[1], env);
    if (len_arg == 3 && arg_pos != FAILURE2)
        insert_arg_in_new_line(arg, env, line_exist, arg_pos);
    return env;
}
