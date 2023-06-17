/*
** EPITECH PROJECT, 2023
** search for old pwd
** File description:
** it search for old pwd in env
*/

#include "minishell.h"

int search_for_oldpwd(char **env)
{
    for (int count = 0; env[count] != NULL; count += 1) {
        if (env[count][0] == 'O' && env[count][1] == 'L' &&
        env[count][2] == 'D') {
            return count;
        }
    }
}
