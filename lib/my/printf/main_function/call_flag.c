/*
** EPITECH PROJECT, 2022
** call_flag
** File description:
** call flag
*/

#include "../../lib.h"

int call_percent(char c, va_list list)
{
    percent_flag();
}

int call_b(char c, va_list list)
{
    b_flag(va_arg(list, int));
}

int call_o(char c, va_list list)
{
    o_flag(va_arg(list, int));
}

int call_p(char c, va_list list)
{
    p_flag(va_arg(list, int));
}

int call_s_printable(char c, va_list list)
{
    s_flag_printable(va_arg(list, char *));
}
