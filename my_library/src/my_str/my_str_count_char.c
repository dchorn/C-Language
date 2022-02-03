/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_str_count_char
*/

#include "my_lib.h"

int my_str_count_char(char *str, char c)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            count++;   
        i++;
    }
    return (count);
}