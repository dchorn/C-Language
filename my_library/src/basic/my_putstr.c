/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_putstr
*/

#include "my_lib.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}