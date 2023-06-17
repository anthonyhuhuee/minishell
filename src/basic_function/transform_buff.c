/*
** EPITECH PROJECT, 2023
** transform buff
** File description:
** transform buff into a linked list
*/

#include "minishell.h"

int transform_buff(global_struct_t *global,
buff_content_t *buff_content, char **env)
{
    if (buff_content->semicolon_exist == true) {
        semi_str_array(buff_content);
        for (BUFF_LIST; BUFF_LIST->next != NULL; BUFF_LIST = BUFF_LIST->next) {
            can_do_action(global, env);
        }
        return SUCCESS;
    }
    if (buff_content->pipe_exist == true) {
        pipe_str_array(buff_content);
        execute_pipe(buff_content, env);
        return SUCCESS;
    } else {
        BUFF_LIST = add_elem_list(BUFF_LIST, my_str_to_word_array(BUFF, 0));
    }
    return FAILURE;
}
