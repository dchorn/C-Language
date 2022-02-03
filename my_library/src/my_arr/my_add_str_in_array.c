/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_add_str_in_array
*/

#include "my_lib.h"
#include <stdlib.h>

char **my_add_str_in_array(char **arr, char *str)
{
    char **stock_arr = NULL;
    int len = 0;

    if (arr == NULL)
        return (NULL);
    len = my_arraylen(arr);
    stock_arr = my_realloc_array(arr, 1);
    if (stock_arr == NULL)
        return (NULL);
    stock_arr[len] = my_strdup(str);
    stock_arr[len + 1] = NULL;
    return (stock_arr);
}