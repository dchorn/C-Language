/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_char_is_uppercase
*/

#include "my_lib.h"

int my_char_is_uppercase(char c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}