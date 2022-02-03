/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_char_swap
*/

#include "my_lib.h"

void my_char_swap(char *src_one, char *src_two)
{
    char tmp;

    tmp = *src_one;
    *src_one = *src_two;
    *src_two = tmp;
}