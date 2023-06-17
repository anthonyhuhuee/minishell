/*
** EPITECH PROJECT, 2023
** replace pwd
** File description:
** replace pwd in env by the new one
*/

#include "minishell.h"

char **replace_pwd(char **env)
{
    int pwd_count = search_for_pwd(env);
    char *cwd = getcwd(NULL, 0);
    int len_pwd = my_strlen("PWD=") + my_strlen(cwd) + 1;
    free(env[pwd_count]);
    char new_pwd[len_pwd];
    my_strcpy(new_pwd, "PWD="), my_strcat(new_pwd, cwd);
    env[pwd_count] = malloc(sizeof(char) * len_pwd);
    my_strcpy(env[pwd_count], new_pwd);
    free(cwd);
    return env;
}
