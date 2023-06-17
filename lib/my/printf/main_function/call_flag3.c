/*
** EPITECH PROJECT, 2022
** call_flag
** File description:
** call flag
*/

#include "../../lib.h"

int call_i(char c, va_list list)
{
    my_put_nbr(va_arg(list, int));
}

int call_c(char c, va_list list)
{
    my_putchar(va_arg(list,int));
}
