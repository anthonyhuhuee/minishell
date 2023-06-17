/*
** EPITECH PROJECT, 2022
** oct base
** File description:
** convert a int into his oct base value
*/

#include "../../lib.h"

int o_flag(int nb)
{
    long int nbr = nb;
    if (nbr < 0) {
        return 84;
    }
    if (nbr >= 8) {
        o_flag(nbr / 8);
        my_put_nbr(nbr % 8);
        return 0;
    }
    my_put_nbr(nbr);
    return 0;
}
