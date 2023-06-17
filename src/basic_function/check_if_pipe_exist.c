/*
** EPITECH PROJECT, 2023
** check pipe
** File description:
** check pipe in str
*/

#include <stdbool.h>
#include "minishell.h"

bool check_if_pipe_exist(char *str)
{
    for (int count = 0; str[count] != '\0'; count += 1) {
        if (str[count] == '|')
            return true;
    }
    return false;
}
