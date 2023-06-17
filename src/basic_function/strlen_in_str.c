/*
** EPITECH PROJECT, 2023
** strleninstr
** File description:
** strleninstr
*/

#include "minishell.h"

int my_strlen_in_str(char const *str, int i)
{
    int count = 0;
    while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n' &&
    str[i] != '=' && str[i] != ':') {
        i += 1;
        count += 1;
    }
    return (count);
}
