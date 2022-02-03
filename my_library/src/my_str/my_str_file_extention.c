/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_str_file_extension
*/

#include "my_lib.h"

int my_str_file_extention(char *str_one, char *str_two)
{
    int len = my_strlen(str_two);
    int i = 0;
    int j = 0;

    while (str_one[i] != '\0') {
        if (str_one[i] == '.')
            j = i;
        i++;
    }
    i = 0;
    while (str_two[i] != '\0' && str_one[j] != '\0') {
        if (str_one[j] != str_two[i])
            return (0);
        i++;
        j++;
    }
    if (len != i)
        return (0);
    return (1);
}