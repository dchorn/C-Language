/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my_lib.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    char **arr = NULL;
    char **stock_arr = NULL;
    int y = 0;

    arr = malloc(sizeof(char *) * 6);
    
    if (arr == NULL)
        return (84);
    arr[0] = my_strdup("Denys");
    arr[1] = my_strdup("Angel");
    arr[2] = my_strdup("MP");
    arr[3] = my_strdup("Gemma");
    arr[4] = my_strdup("Cactus");
    arr[5] = NULL;
    while (arr[y] != NULL) {
        if (arr[y] == NULL)
            return (84);
        y++;
    }
    stock_arr = my_realloc_array(arr, 1);
    if (stock_arr == NULL)
        return (0);
    my_print_array(stock_arr);
    my_free_array(stock_arr);
    return (0);
}