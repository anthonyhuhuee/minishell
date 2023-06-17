/*
** EPITECH PROJECT, 2022
** binary
** File description:
** convert an int into his binary value
*/

#include "../../lib.h"

int b_flag(int nb)
{
    long int nbr = nb;
    if (nbr < 0) {
        return 84;
    }
    if (nbr >= 2) {
        b_flag(nbr / 2);
        my_put_nbr(nbr % 2);
        return 0;
    }
    my_put_nbr(nbr);
    return 0;
}
