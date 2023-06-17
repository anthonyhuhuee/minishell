/*
** EPITECH PROJECT, 2022
** invalid flags
** File description:
** extension of my printf
*/

#include "../../lib.h"

int check_flags2(char c)
{
    switch (c) {
    case 'u':
    case 'x':
    case 'X':
    case 'S':
        break;
    default:
        return 84;
    }
}

int check_flags(const char * format)
{
    for (int count = 0; count != my_strlen(format); count += 1) {
        if (format[count] == '%') {
            switch (format[count + 1]) {
            case 'd':
            case 'i':
            case 'c':
            case 's':
            case '%':
            case 'b':
            case 'o':
            case 'p':
                break;
            default:
                return check_flags2(format[count + 1]);
            }
            count += 1;
        }
    }
    return 0;
}
