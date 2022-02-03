/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_str_is_number
*/

#include "my_lib.h"

int my_str_is_number(char *str)
{
    int i = 0;
    
    while (str[i] != '\0') {
        if (my_char_is_number(str[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}