/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_putnbr
*/

#include "my_lib.h"

void my_putnbr(int nbr)
{
    int num = 0;

    if (nbr == -2147483647) {
        my_putstr("-2147483647");
        return;
    }

    if (nbr < 0) {
        my_putchar('-');
        num = nbr * (-1);
    }
    else
        num = nbr;
    if (num <= 9)
       my_putchar(num + 48);
    else {
        my_putnbr(num / 10);
        my_putnbr(num % 10);
    }
}