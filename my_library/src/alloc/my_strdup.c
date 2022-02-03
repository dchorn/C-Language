/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_strdeb
*/

#include "my_lib.h"
#include <stdlib.h>

char *my_strdup(char *str)
{
    char *str_mall;

    str_mall = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (str_mall == NULL)
        return (NULL);
    str_mall = my_strcpy(str_mall, str);
    return (str_mall);
}