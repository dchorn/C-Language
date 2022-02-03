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
    char **arr_two = NULL;
    char **stock_arr = NULL;
    int y = 0;
    int y_two = 0;
    int space = 0;
    //if (ac != 2)
    //    return (0);
    arr = malloc(sizeof(char *) * (10 + 1));
    arr_two = malloc(sizeof(char *) * (3 + 1));
    if (arr == NULL)
        return (84);
    arr[0] = my_strdup("Denys");
    arr[1] = my_strdup("Angel");
    arr[2] = my_strdup("Gemma");
    arr[3] = my_strdup("MP");
    arr[4] = NULL;
    arr_two[0] = my_strdup("Sans");
    arr_two[1] = my_strdup("Cactus");
    arr_two[2] = NULL;
    while (arr[y] != NULL) {
        if (arr[y] == NULL)
            return (84);
        y++;
    }
    while (arr_two[y_two] != NULL) {
        if (arr_two[y_two] == NULL)
            return (84);
        y_two++;
    }
    stock_arr = my_arraycat(arr, arr_two);
    if (stock_arr == NULL)
        return (0);
    my_print_array(stock_arr);
    my_free_array(arr);
    my_free_array(arr_two);
    return (0);
}