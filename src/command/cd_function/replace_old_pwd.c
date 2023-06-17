/*
** EPITECH PROJECT, 2023
** replace old pwd
** File description:
** replace old pwd in env
*/

#include "minishell.h"

char **replace_old_pwd(char **env)
{
    int pwd_count = search_for_pwd(env);
    int old_pwd_count = search_for_oldpwd(env);
    int len_old_pwd = (my_strlen(env[pwd_count]) + LEN_OLDPWD);
    free(env[old_pwd_count]);
    char *old_cwd = malloc(sizeof(char) * (len_old_pwd + 1));
    my_strcpy(old_cwd, "OLDPWD=");
    my_strcat(old_cwd, clear_path(env[pwd_count]));
    env[old_pwd_count] = malloc(sizeof(char) * my_strlen(old_cwd) + 1);
    my_strcpy(env[old_pwd_count], old_cwd);
    free(old_cwd);
    return env;
}
