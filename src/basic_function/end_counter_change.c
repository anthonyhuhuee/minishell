/*
** EPITECH PROJECT, 2023
** end_of_pipe_counter_change
** File description:
** end_of_pipe_counter_change
*/

#include "minishell.h"

void end_counter_change(buff_content_t *buff_content)
{
    if (BUFF[BUFF_END] == '\0')
        return;
    if (BUFF[BUFF_END + 1] == ' ') {
        BUFF_END += 2;
    } else {
        BUFF_END += 1;
    }
    BUFF_START = BUFF_END;
    return;
}
