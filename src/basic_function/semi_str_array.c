/*
** EPITECH PROJECT, 2023
** pipe array
** File description:
** pipe array
*/

#include "minishell.h"

void semi_str_array(buff_content_t *buff_content)
{
    char **tmp = NULL;
    while (BUFF[BUFF_END] != '\0') {
        while (check_end_of_semi(buff_content) != true) {
            BUFF_END += 1;
        }
        int word_nb = check_space_semi(buff_content);
        buff_content->count_semi += 1;
        tmp = malloc(sizeof(char *) * word_nb);
        tmp = put_in_word_array(BUFF, buff_content->count_start, word_nb);
        BUFF_LIST = add_elem_list(BUFF_LIST, tmp);
        end_counter_change(buff_content);
    }
    buff_content->count_semi -= 1;
    return;
}
