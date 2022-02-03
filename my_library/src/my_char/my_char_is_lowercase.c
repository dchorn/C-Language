/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_char_is_uppercase
*/

#include "my_lib.h"

int my_char_is_lowercase(char c)
{
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}