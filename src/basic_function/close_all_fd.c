/*
** EPITECH PROJECT, 2023
** close all fd
** File description:
** close all fd
*/

#include "minishell.h"

int close_all_fd(buff_content_t *buff_content, int fd[BUFF_PIPE_COUNT][2])
{
    for (int count = 0; count < BUFF_PIPE_COUNT; count += 1) {
        close(fd[count][0]);
        close(fd[count][1]);
    }
    return SUCCESS;
}
