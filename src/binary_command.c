/*
** EPITECH PROJECT, 2023
** exec binary
** File description:
** it search if the binary exists & execute it
*/

#include "minishell.h"

char *search_for_path(char **env)
{
    for (int count = 0; env[count] != NULL; count += 1) {
        if (env[count][0] == 'P' && env[count][1] == 'A' &&
        env[count][2] == 'T' && env[count][3] == 'H') {
            char *result = malloc(sizeof(char) * (my_strlen(env[count]) + 1));
            my_strcpy(result, env[count]);
            return result;
        }
    }
}

void free_binary(char *str, char **str2)
{
    free(str);
    for (int count = 0; str2[count] != NULL; count += 1) {
        free(str2[count]);
    }
    free(str2);
}

int arg_exist(char *cmd_to_check, char **arg, char **env)
{
    struct stat stat_of_file;
    if (stat(cmd_to_check, &stat_of_file) == 0) {
        int child_pid = fork();
        if (child_pid == 0) {
            execve(cmd_to_check, arg, env);
        } else {
            waitpid(child_pid, 0, 0);
        }
        return EPITECH_SUCCESS;
    }
    return EPITECH_ERROR;
}

int binary_command(char **arg, char **env)
{
    if (arg_exist(arg[0], arg, env) == EPITECH_SUCCESS)
        return EPITECH_SUCCESS;
    char *str_path = search_for_path(env);
    char **path = path_str_to_word_array(str_path);
    for (int count = 1; path[count] != NULL; count += 1) {
        int len_path = my_strlen(path[count]), len_arg = my_strlen(arg[0]);
        char *cmd_to_check = malloc(sizeof(char) * (len_path + len_arg + 2));
        my_strcpy(cmd_to_check, path[count]);
        my_strcat(cmd_to_check, "/");
        my_strcat(cmd_to_check, arg[0]);
        cmd_to_check[len_path + len_arg + 1] = '\0';
        if (arg_exist(cmd_to_check, arg, env) == EPITECH_SUCCESS) {
            free(cmd_to_check);
            free_binary(str_path, path);
            return EPITECH_SUCCESS;
        }
        free(cmd_to_check);
    }
    free_binary(str_path, path);
    return EPITECH_ERROR;
}
