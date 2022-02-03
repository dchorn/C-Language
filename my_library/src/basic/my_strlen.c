/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_strlen
*/

#include "my_lib.h"
#include <stdlib.h>

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0   );
    while (str[i] != '\0')
        i++;
    return (i);
}