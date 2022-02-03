/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_char_is_number
*/

#include "my_lib.h"

int my_char_is_number(char c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}