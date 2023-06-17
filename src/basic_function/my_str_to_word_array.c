/*
** EPITECH PROJECT, 2023
** my str to word array
** File description:
** it puts a string into a array (char**)
*/

#include "minishell.h"

int space_counting(char *arg)
{
    int space_count = 1;
    for (int count = 0; arg[count] != '\0'; count += 1) {
        if (arg[count] == ' ' && arg[count + 1] != ' ' &&
        arg[count + 1] != '\0')
        space_count += 1;
    }
    return space_count;
}

char **my_str_to_word_array(char *arg, int count_start)
{
    int len_word = 0, count_result = 0;
    int space_count = space_counting(arg);
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
