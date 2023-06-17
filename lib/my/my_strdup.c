/*
** EPITECH PROJECT, 2022
** str dup
** File description:
** allocate memory and copies str given in it
*/

#include <stdlib.h>
#include "lib.h"

char *my_strdup(char const *src)
{
    int n = 0;
    char *dest;
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[n] != '\0') {
        dest[n] = src[n];
        n = n + 1;
    }
    dest[n] = ('\0');
    return (dest);
}
