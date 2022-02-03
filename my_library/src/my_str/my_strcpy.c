/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_strcpy
*/

#include "my_lib.h"
#include <stdio.h>

char *my_strcpy(char *dest, char *source)
{
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}