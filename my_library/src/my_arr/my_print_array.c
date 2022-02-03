/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_putarr
*/

#include "my_lib.h"
#include <stddef.h>

void my_print_array(char **arr)
{
    int y = 0;
    
    if (arr == NULL)
        return;
    while (arr[y] != NULL) {
        my_putstr(arr[y]);
        my_putchar('\n');
        y++;
    }
}