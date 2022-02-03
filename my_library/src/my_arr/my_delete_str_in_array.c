/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_delete_str_in_array
*/

#include "my_lib.h"
#include <stdlib.h>

char **my_delete_str_in_array(char **arr, char *str)
{
    int y = 0;
    int count = my_count_str_in_array(arr, str);
    char **stock_arr = NULL;

    stock_arr = malloc(sizeof(char *) * (my_arraylen(arr) - count + 1));
    if (stock_arr == NULL)
        return (NULL);
    for (int i = 0; arr[i] != NULL; i++) {
        if (my_strcmp(arr[i], str) != 1) {
            stock_arr[y] = my_strdup(arr[i]);
            if (stock_arr[y] == NULL)
                return (NULL);
            y++;
        }
    }
    stock_arr[y] = NULL;
    my_free_array(arr);
    return (stock_arr);
}