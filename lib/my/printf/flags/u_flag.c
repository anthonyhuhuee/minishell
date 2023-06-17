/*
** EPITECH PROJECT, 2022
** my put number
** File description:
** display number given except negative values
*/

#include "../../lib.h"

int u_flag(int nb)
{
    long int nbr = nb;
    if (nbr < 0) {
        return 84;
    }
    if (nbr / 10 > 0) {
        my_put_nbr(nbr / 10);
    }
    my_putchar(nbr % 10 + '0');
    return 0;
}
