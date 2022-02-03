/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_strcat
*/

#include "my_lib.h"
#include <stdio.h>

char *my_strcat(char *dest, char *source)
{
    int i = 0;
    int len_dest = my_strlen(dest);

    while (source[i] != '\0') {
        dest[len_dest + i] = source[i];
        i++;
    }
    dest[len_dest + i] = '\0';
    return (dest);
} 