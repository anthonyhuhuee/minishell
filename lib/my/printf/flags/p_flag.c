/*
** EPITECH PROJECT, 2022
** p flag
** File description:
** add 0x before x_flag
*/

#include "../../lib.h"

int p_flag(int nb)
{
    if (nb < 0) {
        return 84;
    }
    my_putstr("0x");
    x_flag(nb);
    return 0;
}
