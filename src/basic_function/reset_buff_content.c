/*
** EPITECH PROJECT, 2023
** reset buff content
** File description:
** reset buff content
*/

#include "minishell.h"

void reset_buff_content(buff_content_t *buff_content)
{
    buff_content->buff = NULL;
    buff_content->count_start = 0;
    buff_content->count_end = 0;
    buff_content->semicolon_exist = false;
    buff_content->pipe_exist = false;
    buff_content->count_pipe = 0;
    buff_content->semicolon = NULL;
    buff_content->arg = NULL;
}
