/*
** EPITECH PROJECT, 2023
** actions
** File description:
** action that my minishell can do
*/

#include "minishell.h"

int can_do_action(global_struct_t *global, char **env)
{
    if (GLB->CONTENT->pipe_exist == true) {
        return SUCCESS;
    }
    if (compare_string(GLB->BUFF_ARRAY[0], "setenv") == EPITECH_SUCCESS ||
    compare_string(GLB->BUFF_ARRAY[0], "unsetenv") == EPITECH_SUCCESS) {
        global->env = action_in_env(GLB->buff_content, global->env);
        return SUCCESS;
    }
    if (exit_function(GLB->BUFF_ARRAY, env, GLB->CONTENT) == EPITECH_SUCCESS) {
        return FAILURE2;
    } else {
        if (action_to_do(GLB->buff_content, GLB->BUFF_ARRAY, env) == FAILURE2)
            return FAILURE2;
    }
    return SUCCESS;
}

int action_to_do(buff_content_t *buff_content, char **arg, char **env)
{

    if (compare_string(arg[0], "env") == EPITECH_SUCCESS) {
        env_function(arg, env);
        return EPITECH_SUCCESS;
    }
    if (compare_string(arg[0], "cd") == EPITECH_SUCCESS) {
        cd_function(arg, env);
        return EPITECH_SUCCESS;
    }
    if (binary_command(arg, env) == EPITECH_SUCCESS) {
        return EPITECH_SUCCESS;
    }
    my_printf("%s: Command not found.\n", arg[0]);
    return EPITECH_ERROR;
}

char **action_in_env(buff_content_t *buff_content , char **env)
{
    if (buff_content->pipe_exist == true)
        return env;
    if (compare_string(BUFF_ARRAY[0], "setenv") == EPITECH_SUCCESS) {
        env = setenv_function(BUFF_ARRAY, env);
        return env;
    }
    if (compare_string(BUFF_ARRAY[0], "unsetenv") == EPITECH_SUCCESS) {
        env = unsetenv_function(BUFF_ARRAY, env);
        return env;
    }
    return env;
}
