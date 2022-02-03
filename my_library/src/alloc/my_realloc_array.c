/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_realloc_array
*/

#include "my_lib.h"
#include <stdlib.h>
#include <stdio.h>

char **my_realloc_array(char **arr, int space)
{
    char **new_arr = NULL;
    int y = 0;

    new_arr = malloc(sizeof(char *) * (my_arraylen(arr) + space + 1));
    if (new_arr == NULL)
        return (NULL);
    while (arr[y] != NULL) {
        new_arr[y] = my_strdup(arr[y]);
        if (new_arr == NULL)
            return (NULL);
        y++;
    }
    new_arr[y] = NULL;
    my_free_array(arr);
    return (new_arr);
}