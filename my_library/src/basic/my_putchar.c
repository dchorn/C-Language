/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** put a char
*/

#include "my_lib.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
}