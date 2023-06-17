/*
** EPITECH PROJECT, 2022
** S flag
** File description:
** replace all non-printable characters by backslash + hexa value
*/

#include "../../lib.h"

int zeros(char c)
{
    if (c < 10) {
        my_putstr("00");
        o_flag(c);
        return 0;
    }
    if (c < 32) {
        my_putchar('0');
        o_flag(c);
        return 0;
    }
    if (c > 127) {
        o_flag(c);
        return 0;
    }
}

int s_flag_printable(char const *str)
{
    int end = 0;
    while (str[end] != '\0'){
        if (str[end] < 32 || str[end] >= 127) {
            my_putchar('\\');
            zeros(str[end]);
        } else {
            my_putchar(str[end]);
        }
        end += 1;
    }
    return (0);
}
