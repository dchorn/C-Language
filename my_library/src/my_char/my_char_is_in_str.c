/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_char_is_in_str
*/

#include "my_lib.h"

int my_char_is_in_str(char *str, char character)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == character)
            return (1);
        i++;
    }
    return (0);
}