/*
** EPITECH PROJECT, 2023
** tild arg
** File description:
** take home path when ~ is written in argument
*/

#include "minishell.h"

int search_for_home(char **env)
{
    for (int count = 0; env[count] != NULL; count += 1) {
        if (env[count][0] == 'H' && env[count][1] == 'O' &&
        env[count][2] == 'M' && env[count][3] == 'E') {
            return count;
        }
    }
}

char *tild_arg(char **arg, char **env)
{
    int count_home = search_for_home(env);
    char *home_path = clear_path(env[count_home]);
    int len_result = my_strlen((home_path + my_strlen(arg[1])) - 1);
    char *result = malloc(sizeof(char) * (len_result + 1));
    my_strcpy(result, home_path);
    int count_result = my_strlen(result);
    for (int count = 1; arg[1][count] != '\0'; count += 1) {
        result[count_result] = arg[1][count];
        count_result += 1;
    }
    result[count_result] = '\0';
    return result;
}
