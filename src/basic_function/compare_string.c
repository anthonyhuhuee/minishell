/*
** EPITECH PROJECT, 2023
** compare string
** File description:
** it compare str 1 and str 2 given in parameters
*/

#include "minishell.h"

int compare_string(const char *str, const char *str2)
{
    if (my_strlen(str) != my_strlen(str2))
        return EPITECH_ERROR;
    for (int count = 0; str[count] != '\0'; count += 1) {
        if (str[count] != str2[count])
            return EPITECH_ERROR;
    }
    return EPITECH_SUCCESS;
}
