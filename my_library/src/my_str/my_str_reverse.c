/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_reverse_str
*/

#include "my_lib.h"

void my_str_reverse(char *str)
{
    int len = my_strlen(str);

    while (len >= 0) {
        my_putchar(str[len]);
        len--;
    }
}