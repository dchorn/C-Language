/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_str_is_in_str
*/

#include "my_lib.h"
#include <stdio.h>

int my_str_is_in_str(char *str_one, char *str_two)
{
    int i = 0;
    int c = 0;
    int len = my_strlen(str_two);

    while (str_one[i] != '\0') {
        if (str_one[i] == str_two[c])
            c++;
        else if (c == len)
            return (1);
        else
            c = 0;
        i++;
    }
    return (0);
}