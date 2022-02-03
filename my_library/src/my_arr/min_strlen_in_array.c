/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** min_strlen_in_array
*/

#include "my_lib.h"
#include <stdlib.h>

int min_strlen_in_array(char **arr)
{
    int min_length = 0;
    int len = 0;
    int y = 0;

    if (arr == NULL)
        return (-1);
    min_length = my_strlen(arr[0]);
    while (arr[y] != NULL) {
        len = my_strlen(arr[y]);
        if (min_length > len)
            min_length = len;
        y++;
    }
    return (min_length);
}