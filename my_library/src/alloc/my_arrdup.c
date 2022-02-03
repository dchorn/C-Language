/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_arrdup
*/

#include "my_lib.h"
#include <stdlib.h>

char **my_arrdup(char **arr)
{
    char **arr_mall;
    int y = 0;

    arr_mall = malloc(sizeof(char *) * (my_arraylen(arr) + 1));
    if (arr_mall == NULL)
        return (NULL);
    while (arr[y] != NULL) {
        arr_mall[y] = my_strdup(arr[y]);
        if (arr_mall[y] == NULL)
            return (NULL);
        y++;
    }
    arr_mall[y] = NULL;
    return  (arr_mall);
}