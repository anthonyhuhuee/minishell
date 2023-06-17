/*
** EPITECH PROJECT, 2023
** check end
** File description:
** check end
*/

#include "minishell.h"

bool check_end_of_semi(buff_content_t *buff_content)
{
    if (BUFF[BUFF_END] == ';')
        return true;
    if (BUFF[BUFF_END] == '\0')
        return true;
    return false;
}

bool check_end_of_pipe(buff_content_t *buff_content)
{
    if (BUFF[BUFF_END] == '|')
        return true;
    if (BUFF[BUFF_END] == '\0')
        return true;
    return false;
}
