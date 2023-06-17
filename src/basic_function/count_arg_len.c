/*
** EPITECH PROJECT, 2023
** count arg len
** File description:
** it count the len of a char **
*/

#include "minishell.h"

int count_arg_len(char **arg)
{
    int len_arg = 0;
    while (arg[len_arg] != NULL) {
        len_arg += 1;
    }
    return len_arg;
}
