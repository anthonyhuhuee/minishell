/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** print a char
*/

#include <unistd.h>

int my_putchar(char c)
{
    static int len = 0;
    if (c == -42) {
        return len;
    }
    write(1, &c, 1);
    len += 1;
    return 0;
}
