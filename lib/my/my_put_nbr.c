/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** print nbr
*/

#include "lib.h"

int my_put_nbr(int nb)
{
    long int nbr = nb;
    if (nbr < 0) {
        my_putchar(45);
        nbr = -nbr;
    }
    if (nbr > 9) {
        my_put_nbr(nbr / 10);
    }
    my_putchar(48 + nbr % 10);
    return (0);
}
