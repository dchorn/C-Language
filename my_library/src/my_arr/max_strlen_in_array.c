/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** max_strlen_in_array
*/

#include "my_lib.h"
#include <stdlib.h>

int max_strlen_in_array(char **arr)
{
    int max_len = 0;
    int len = 0;
    int y = 0;

    if (arr == NULL)
        return (0);
    while (arr[y] != NULL) {
        len = my_strlen(arr[y]);
        if (len > max_len)
            max_len = len;
        y++;
    }
    return (max_len);
}