/*
** EPITECH PROJECT, 2022
** mini printf
** File description:
** mini printf
*/

#include "../../lib.h"

int my_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    static int len = 0;
    if (my_strlen(format) == 0 || check_flags(format) == 84) {
        return 84;
    }
    for (int count = 0; format[count] != '\0'; count += 1) {
        if (format[count] == '%') {
            tab_function_point(format[count + 1], list);
            count += 1;
        } else {
            my_putchar(format[count]);
        }
    }
    va_end(list);
    return my_putchar(-42);
}
