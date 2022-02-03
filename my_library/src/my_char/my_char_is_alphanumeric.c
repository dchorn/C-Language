/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_char_is_alphanumeric
*/

#include "my_lib.h"

int my_char_is_alphanumeric(char c)
{
    if ((my_char_is_alpha(c) == 1) || (my_char_is_number(c) == 1))
        return (1);
    return (0);
}