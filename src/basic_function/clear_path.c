/*
** EPITECH PROJECT, 2023
** clear path
** File description:
** it's a function to clear a path from env
*/

#include "minishell.h"

char *clear_path(char *path_to_clear)
{
    int count = 0;
    while (path_to_clear[count] != '=') {
        count += 1;
    }
    count += 1;
    int len_clr_path = (my_strlen(path_to_clear) - count);
    char *clr_pth = malloc(sizeof(char) * (len_clr_path + 1));
    for (int count_result = 0; path_to_clear[count] != '\0';
    count_result += 1) {
        clr_pth[count_result] = path_to_clear[count];
        count += 1;
    }
    clr_pth[len_clr_path] = '\0';
    return clr_pth;
}
