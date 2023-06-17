/*
** EPITECH PROJECT, 2023
** clear buff
** File description:
** clear buff
*/

#include "minishell.h"

int check_spaces(char *buff, int count, int count_result)
{
    switch (buff[count]) {
    case ' ':
        if (count_result == 0 || buff[count + 1] == ' ' ||
        buff[count + 1] == '\n')
            return EPITECH_ERROR;
    default:
        return EPITECH_SUCCESS;
    }
}

char *remove_backslash_t(char *buff)
{
    char *temp = malloc(sizeof(char) * (my_strlen(buff) + 1));
    my_strcpy(temp, buff);
    for (int count = 0; buff[count] != '\0'; count += 1) {
        if (buff[count] == '\t') {
            temp[count] = ' ';
        } else {
            temp[count] = buff[count];
        }
    }
    return temp;
}

char *clear_buff(char *buff)
{
    char *temp = remove_backslash_t(buff);
    temp[my_strlen(buff)] = '\0';
    char *result = malloc(sizeof(char) * (my_strlen(buff) + 1));
    int count_result = 0;
    for (int count = 0; temp[count] != '\0'; count += 1) {
        if (check_spaces(temp, count, count_result) == EPITECH_SUCCESS) {
            result[count_result] = temp[count];
            count_result += 1;
        }
    }
    result[count_result] = '\0';
    free(temp);
    return result;
}
