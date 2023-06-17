/*
** EPITECH PROJECT, 2023
** my str to word array
** File description:
** it puts a string into a array (char**)
*/

#include "minishell.h"

int path_strlen_in_str(char const *str, int i)
{
    int count = 0;
    while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n' &&
    str[i] != '=' && str[i] != ':') {
        i += 1;
        count += 1;
    }
    return (count);
}

int path_space_counting(char *arg)
{
    int space_count = 1;
    for (int count = 0; arg[count] != '\0'; count += 1) {
        if (arg[count] == ':' && arg[count + 1] != ':' &&
        arg[count + 1] != '\0')
        space_count += 1;
    }
    return space_count;
}

int count_beginning(const char *arg)
{
    int count = 0;
    while (arg[count] != '=' ){
        count += 1;
    }
    return count + 1;
}

char **path_str_to_word_array(char *arg)
{
    int len_word = 0, count_result = 0;
    int space_count = path_space_counting(arg);
    char **result = malloc(sizeof(char *) * (space_count + 1));
    for (int count = count_beginning(arg); count_result != space_count;
    len_word = 0) {
        len_word = path_strlen_in_str(arg, count);
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
