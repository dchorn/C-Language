/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_realloc
*/

#include "my_lib.h"
#include <stdlib.h>

char *my_realloc(char *str, int space)
{
    char *new_str;

    new_str = malloc(sizeof(char) * (my_strlen(str) + space + 1));
    if (new_str == NULL)
        return (NULL);
    new_str = my_strcpy(new_str, str);
    free(str);
    return (new_str);
}