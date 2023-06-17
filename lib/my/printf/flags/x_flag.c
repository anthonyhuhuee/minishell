/*
** EPITECH PROJECT, 2022
** hexa base
** File description:
** convert a int into his hexa base value lowcase
*/

#include "../../lib.h"

int nums_low(int nbr)
{
    char letters[6] = "abcdef";
    switch (nbr) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        my_put_nbr(nbr);
        break;
    default:
        my_putchar(letters[nbr - 10]);
        break;
    }
}

int x_flag(int nb)
{
    long int nbr = nb;
    if (nbr < 0) {
        return 84;
    }
    if (nbr >= 10 && nbr <= 16) {
        nums_low(nbr);
        return 0;
    }
    if (nbr >= 16) {
        x_flag(nbr / 16);
        nums_low(nbr % 16);
        return 0;
    }
    my_put_nbr(nbr);
    return 0;
}
