/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_strcmp
*/

#include "my_lib.h"

int my_strcmp(char *str_one, char *str_two)
{
    int i = 0;
    int len_one = my_strlen(str_one);
    int len_two = my_strlen(str_two);

    if (len_one != len_two)
        return (0);

    while (str_one[i] != '\0') {
        if (str_one[i] != str_two[i])
            return (0);
        i++;
    }
    return (1);
}