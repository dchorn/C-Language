/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_char_is_alpha
*/

#include "my_lib.h"

int my_char_is_alpha(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}