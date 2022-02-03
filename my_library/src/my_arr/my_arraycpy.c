/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_arrcpy
*/

#include "my_lib.h"
#include <stddef.h>
#include <stdio.h>

char **my_arraycpy(char **dest, char **source)
{
    int y = 0;
    int x = 0;
    
    while (source[y] != NULL) {
        x = 0;
        while (source[y][x] != '\0') {
            dest[y][x] = source[y][x];
            x++;
        }
        dest[y][x] = '\0';
        y++;
    }
    dest[y] = NULL;
    return (dest);
}