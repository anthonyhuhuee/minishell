/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** linked list
*/

#include "minishell.h"

linked_list_t *add_elem_list(linked_list_t *list, char **arg)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    if (new_node == NULL)
        return NULL;
    new_node->arg_in_array = arg;
    new_node->next = NULL;
    if (list == NULL) {
        list = new_node;
        return list;
    }
    linked_list_t *tmp = list;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new_node;
    return tmp;
}
