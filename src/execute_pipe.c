/*
** EPITECH PROJECT, 2023
** execute pipe
** File description:
** execute pipe
*/

#include "minishell.h"

int first_pipe_action(buff_content_t *buff_content, int fd[BUFF_PIPE_COUNT][2],
char **env)
{
    int pid = fork();
    if (pid == 0) {
        dup2(fd[0][1], STDOUT_FILENO);
        close_all_fd(buff_content, fd);
        exit(action_to_do(buff_content, BUFF_ARRAY, env));
    }
    return SUCCESS;
}

int middle_pipe_action(buff_content_t *buff_content,
int fd[BUFF_PIPE_COUNT][2], char **env, int count)
{
    int pid = fork();
    if (pid == 0) {
        dup2(fd[count - 1][0], STDIN_FILENO);
        dup2(fd[count][1], STDOUT_FILENO);
        close_all_fd(buff_content, fd);
        exit(action_to_do(buff_content, BUFF_ARRAY, env));
    }
    return SUCCESS;
}

int last_pipe_action(buff_content_t *buff_content, int fd[BUFF_PIPE_COUNT][2],
char **env)
{
    int pid = fork();
    if (pid == 0) {
        dup2(fd[BUFF_PIPE_COUNT - 1][0], STDIN_FILENO);
        close_all_fd(buff_content, fd);
        exit(action_to_do(buff_content, BUFF_ARRAY, env));
    } else {
        close_all_fd(buff_content, fd);
        waitpid(pid, 0, 0);
        return SUCCESS;
    }
}

int execute_pipe(buff_content_t *buff_content, char **env)
{
    int fd[BUFF_PIPE_COUNT][2];
    buff_content_t *tmp = buff_content;
    for (int count = 0; count < BUFF_PIPE_COUNT; count += 1) {
        if (pipe(fd[count]) == FAILURE2)
            return FAILURE;
    }
    for (int count = 0; count <= BUFF_PIPE_COUNT; count += 1) {
        if (count == 0)
            first_pipe_action(buff_content, fd, env);
        if (count > 0 && count < BUFF_PIPE_COUNT)
            middle_pipe_action(buff_content, fd, env, count);
        if (count == BUFF_PIPE_COUNT)
            last_pipe_action(buff_content, fd, env);
        if (tmp->arg != NULL)
            tmp->arg = tmp->arg->next;
    }
    return SUCCESS;
}
