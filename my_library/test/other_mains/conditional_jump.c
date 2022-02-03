/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** conditional_jump
*/

#include <stdlib.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    char *str;
    str = malloc(sizeof(char) * 5);
    str[0] = 'T';
    str[1] = 'O';
    str[2] = 'T';
    str[3] = 'O';
    //str[4] = '\0';

    my_strlen(str);
    return (0);
}