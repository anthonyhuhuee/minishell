/*
** EPITECH PROJECT, 2022
** functions pointer
** File description:
** function pointers
*/

#include "../../lib.h"

int (*all_functions[12])(char, va_list list) = {
    &call_percent,
    &call_b,
    &call_o,
    &call_p,
    &call_s_printable,
    &call_u,
    &call_x,
    &call_x_upcase,
    &call_s,
    &call_d,
    &call_i,
    &call_c,
};

int tab_function_point(char c, va_list list)
{
    char *all_flags = "%bopSuxXsdic";
    int count = 0;

    while (c != all_flags[count] && count < my_strlen(all_flags)) {
        count += 1;
    }
    all_functions[count](c, list);
    return 0;
}
