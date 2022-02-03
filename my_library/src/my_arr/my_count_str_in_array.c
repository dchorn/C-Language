/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_count_str_in_array
*/

#include "my_lib.h"
#include <stdlib.h>

int my_count_str_in_array(char **arr, char *str)
{
    int y = 0;
    int count = 0;

    if (arr == NULL)
        return (84);
    while (arr[y] != NULL) {
        if (my_strcmp(arr[y], str) == 1)
            count++;
        y++;
    }
    if (count > 0)
        return (count);
    return (-1);
}