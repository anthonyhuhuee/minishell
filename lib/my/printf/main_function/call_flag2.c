/*
** EPITECH PROJECT, 2022
** call_flag
** File description:
** call flag
*/

#include "../../lib.h"

int call_u(char c, va_list list)
{
    u_flag(va_arg(list, int));
}

int call_x(char c, va_list list)
{
    x_flag(va_arg(list, int));
}

int call_x_upcase(char c, va_list list)
{
    x_flag_upcase(va_arg(list, int));
}

int call_s(char c, va_list list)
{
    my_putstr(va_arg(list, char *));
}

int call_d(char c, va_list list)
{
    my_put_nbr(va_arg(list, int));
}
