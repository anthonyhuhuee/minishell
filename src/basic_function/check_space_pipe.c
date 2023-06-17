/*
** EPITECH PROJECT, 2023
** check space pipe
** File description:
** check space pipe
*/

#include "minishell.h"

int check_space_semi(buff_content_t *buff_content)
{
    int space_count = 1;
    for (int count = BUFF_START; count != buff_content->count_end; count += 1) {
        if (BUFF[count] == ' ' && BUFF[count + 1] != ' '
        && BUFF[count + 1] != '\0' && BUFF[count + 1] != ';')
            space_count += 1;
    }
    return space_count;
}

int check_space_pipe(buff_content_t *buff_content)
{
    int space_count = 1;
    for (int count = BUFF_START; count != buff_content->count_end; count += 1) {
        if (BUFF[count] == ' ' && BUFF[count + 1] != ' '
        && BUFF[count + 1] != '\0' && BUFF[count + 1] != '|')
            space_count += 1;
    }
    return space_count;
}
