/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_arrlen
*/

#include "my_lib.h"
#include <stdlib.h>

int my_arraylen(char **arr)
{
    int len = 0;

    if (arr == NULL)
        return (0);
    while (arr[len] != NULL)
        len++;
    return (len);
}