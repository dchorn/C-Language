/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_strncmp
*/

#include "my_lib.h"

int my_strncmp(char *str_one, char *str_two, int n)
{
    int i = 0;
    int len_one = my_strlen(str_one);
    int len_two = my_strlen(str_two);

    if (n > len_one|| n > len_two)
        return (0);

    while (i < n && str_one[i] != '\0') {
        if (str_one[i] != str_two[i])
            return (0);
        i++;
    }
    return (1);
}