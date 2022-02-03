/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** my_getnbr
*/

#include "my_lib.h"

int my_getnbr(char *str)
{
    int i = 0;
    int operator = 1;
    int convert = 0;

    while(str[i] != '\0' && my_char_is_number(str[i]) == 0) {
        if (str[i] == '-')
            operator = operator * (-1);
        else
            operator = 1;
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        if (my_char_is_number(str[i]) == 1) {
            convert = convert * 10;
            convert = convert + str[i] - 48;
        }
        i++;
    }
    convert = convert * operator;
    return (convert);
}