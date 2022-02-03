/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my_lib.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{   
    char **arr = NULL;
    char **stock_arr = NULL;
    char *src = NULL;
    int y = 0;

    if (ac != 2)
        return (0);

    arr = malloc(sizeof(char *) * 7);

    if (arr == NULL)
        return (84);
    arr[0] = my_strdup("Denys");
    arr[1] = my_strdup("Angel");
    arr[2] = my_strdup("Gemma");
    arr[3] = my_strdup("MP");
    arr[4] = my_strdup("Gemma");
    arr[5] = my_strdup("Cactus");
    arr[6] = NULL;
    while (arr[y] != NULL) {
        if (arr[y] == NULL)
            return (84);
        y++;
    }
    stock_arr = my_add_str_in_array(arr, "TOTO");
    my_print_array(stock_arr);
    my_putchar('\n');
    stock_arr = my_delete_str_in_array(stock_arr, av[1]);
    my_print_array(stock_arr);
    my_free_array(stock_arr);
    return (0);
}