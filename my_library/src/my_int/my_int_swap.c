/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_int_swap
*/

#include "my_lib.h"
#include <stdio.h>

void my_int_swap(int *nb_one, int *nb_two)
{
    int tmp = 0;

    tmp = *nb_one;
    *nb_one = *nb_two;
    *nb_two = tmp;
}