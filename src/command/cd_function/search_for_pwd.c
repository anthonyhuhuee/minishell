/*
** EPITECH PROJECT, 2023
** search for pwd
** File description:
** search for pwd in env
*/

#include "minishell.h"

int search_for_pwd(char **env)
{
    for (int count = 0; env[count] != NULL; count += 1) {
        if (env[count][0] == 'P' && env[count][1] == 'W' &&
        env[count][2] == 'D') {
            return count;
        }
    }
}
