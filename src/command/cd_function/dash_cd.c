/*
** EPITECH PROJECT, 2023
** dash cd
** File description:
** it does cd - | replace current by old & old by current
*/

#include "minishell.h"

char **replace_current_by_old(char **env, int pos_pwd,
int pos_old_pwd, int len_new_pwd)
{
    free(env[pos_pwd]);
    env[pos_pwd] = malloc(sizeof(char) * (len_new_pwd + 1));
    my_strcpy(env[pos_pwd], "PWD=");
    my_strcat(env[pos_pwd], clear_path(env[pos_old_pwd]));
    return env;
}

char **replace_old_by_current(char **env, char *temp,
int pos_old_pwd, int len_old_pwd)
{
    free(env[pos_old_pwd]);
    env[pos_old_pwd] = malloc(sizeof(char) * (len_old_pwd + 1));
    my_strcpy(env[pos_old_pwd], "OLD");
    my_strcat(env[pos_old_pwd], temp);
    return env;
}

char **dash_cd(char **env)
{
    int pos_pwd = search_for_pwd(env);
    int pos_old_pwd = search_for_oldpwd(env);
    int len_new_pwd = (my_strlen(env[pos_old_pwd]) - LEN_OLDPWD);
    int len_old_pwd = (my_strlen(env[pos_pwd]) + LEN_OLDPWD);

    char *temp = malloc(sizeof(char) * my_strlen(env[pos_pwd]) + 1);
    my_strcpy(temp, env[pos_pwd]);

    env = replace_current_by_old(env, pos_pwd, pos_old_pwd, len_new_pwd);
    env = replace_old_by_current(env, temp, pos_old_pwd, len_old_pwd);

    free(temp);
    return env;
}
