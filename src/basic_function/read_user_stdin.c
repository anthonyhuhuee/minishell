/*
** EPITECH PROJECT, 2023
** read user stdin
** File description:
** it puts into a buff what user puts in terminal
*/

#include "minishell.h"

int read_user_stdin(buff_content_t *buff_content)
{
    size_t size = 0;
    int return_get = getline(&BUFF, &size, stdin);
    if (return_get == -1)
        return EPITECH_ERROR;
    BUFF[size - 1] = '\0';
    BUFF = clear_buff(BUFF);
    buff_content->semicolon_exist = check_if_semi_exist(BUFF);
    buff_content->pipe_exist = check_if_pipe_exist(BUFF);
    return SUCCESS;
}
