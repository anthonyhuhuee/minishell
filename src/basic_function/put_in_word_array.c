/*
** EPITECH PROJECT, 2023
** put in word array
** File description:
** put in word array
*/

#include "minishell.h"

char **put_in_word_array(char *arg, int count_start, int space_count)
{
    int len_word = 0, count_result = 0;
    char **result = malloc(sizeof(char *) * (space_count + 1));
    for (int count = count_start; count_result != space_count; len_word = 0) {
        len_word = my_strlen_in_str(arg, count);
        result[count_result] = malloc(sizeof(char) * (len_word + 1));
        for (int count_word = 0; count_word != len_word; count_word += 1) {
            result[count_result][count_word] = arg[count + count_word];
        }
        result[count_result][len_word] = '\0';
        count_result += 1;
        count += len_word + 1;
    }
    result[space_count] = NULL;
    return result;
}
