/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_arraycat
*/

#include "my_lib.h"
#include <stdlib.h>

char **my_arraycat(char **dest, char **src)
{
    int y = 0;
    int len = my_arraylen(dest);

    if (src == NULL || dest == NULL)
        return (NULL);
    while (src[y] != NULL) {
        dest[len + y] = my_strdup(src[y]);
        if (dest[len + y] == NULL)
            return (NULL);
        y++;
    }
    dest[len + y] = NULL;
    return (dest);
}