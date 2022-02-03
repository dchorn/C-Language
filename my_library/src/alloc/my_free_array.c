/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_free_array
*/

#include "my_lib.h"
#include <stddef.h>
#include <stdlib.h>

void my_free_array(char **arr)
{
    int y = 0;
    
    if (arr == NULL)
        return;
    while (arr[y] != NULL) {
        if (arr[y] != NULL)
            free(arr[y]);
        y++;
    }
    free(arr);
}