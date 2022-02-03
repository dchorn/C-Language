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
    int y = 0;
    int max_len = 0;
    int min_len = 0;
    //if (ac != 2)
    //    return (0);
    arr = malloc(sizeof(char *) * (5 + 1));
    if (arr == NULL)
        return (84);
    arr[0] = my_strdup("abc");
    arr[1] = my_strdup("abcdefghij");
    arr[2] = my_strdup("ab");
    arr[3] = my_strdup("adfsdf");
    arr[4] = my_strdup("asasd");
    arr[5] = NULL;
    while (arr[y] != NULL) {
        if (arr[y] == NULL)
            return (84);
        y++;
    }
    max_len = max_strlen_in_array(arr);
    printf("MAX_LEN = %d\n", max_len);
    min_len = min_strlen_in_array(arr);
    printf("MIN_LEN = %d\n", min_len);
    my_putchar('\n');
    my_print_array(arr);
    my_free_array(arr);
    return (0);
}