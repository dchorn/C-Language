/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_str_in_array
*/

#include "my_lib.h"
#include <stdlib.h>

int my_str_in_array(char **arr, char *str)
{
    int y = 0;

    if (arr == NULL)
        return (84);
    while (arr[y] != NULL) {
        if (my_strcmp(arr[y], str) == 1)
            return (y);
        y++;
    }
    return (-1);
}