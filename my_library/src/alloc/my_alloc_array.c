/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_alloc_array
*/

#include "my_lib.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char **my_alloc_array(int y, int x)
{
    char **arr_mall;
    int i = 0;

    arr_mall = malloc(sizeof(char *) * (y+1));
    if (arr_mall == NULL)
        return (NULL);
    while (i < y) {   
        arr_mall[i] = malloc(sizeof(char) * (x+1));
        if (arr_mall[i] == NULL)
            return (NULL);
        i++;
    }
    arr_mall[i] = NULL;
    return (arr_mall);
}