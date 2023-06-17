/*
** EPITECH PROJECT, 2023
** cd function
** File description:
** cd function
*/

#include "minishell.h"

int cd_function(char **arg, char **env)
{
    if (arg[1][0] == '-') {
        dash_cd(env);
        chdir(clear_path(env[search_for_pwd(env)]));
        return EPITECH_SUCCESS;
    }
    if (arg[1][0] == '~') {
        arg[1] = tild_arg(arg, env);
    }
    int action_ch = chdir(arg[1]);
    if (action_ch == -1) {
        my_printf("%s: Not a directory.\n", arg[1]);
    }
    env = replace_old_pwd(env);
    env = replace_pwd(env);
    return EPITECH_SUCCESS;
}
