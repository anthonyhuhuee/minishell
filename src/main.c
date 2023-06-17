/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "minishell.h"

int main(int argc, char **argv, char **env)
{
    if (error_handling(argc, argv) == EPITECH_ERROR)
        return EPITECH_ERROR;
    char **my_env = copy_env(env);
    return minishell(my_env);
}
