/*
** EPITECH PROJECT, 2023
** pipe array
** File description:
** pipe array
*/

#include "minishell.h"

void pipe_str_array(buff_content_t *buff_content)
{
    char **tmp = NULL;
    while (BUFF[BUFF_END] != '\0') {
        while (check_end_of_pipe(buff_content) != true) {
            BUFF_END += 1;
        }
        int word_nb = check_space_pipe(buff_content);
        buff_content->count_pipe += 1;
        tmp = malloc(sizeof(char *) * word_nb);
        tmp = put_in_word_array(BUFF, buff_content->count_start, word_nb);
        BUFF_LIST = add_elem_list(BUFF_LIST, tmp);
        end_counter_change(buff_content);
    }
    BUFF_PIPE_COUNT -= 1;
    return;
}
