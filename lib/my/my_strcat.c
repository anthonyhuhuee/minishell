/*
** EPITECH PROJECT, 2022
** str cat
** File description:
** pen & apple = applepen
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int x = 0;
    while (dest[i] != '\0') {
        i = i + 1;
    }
    while (src[x] != '\0') {
        dest[i + x] = src[x];
        x = x + 1;
    }
    dest[i + x] = '\0';
    return dest;
}
