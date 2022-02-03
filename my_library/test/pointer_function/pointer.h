/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** pointer
*/

#ifndef POINTER_H_
#define POINTER_H_

#include <stdio.h>
#include <stdlib.h>

#define OPERATOR_PLUS "+"
#define OPERATOR_SUB "-"
#define OPERATOR_MULT "x"
#define OPERATOR_DIV "/"

#define OPERATOR_NBR 4

typedef enum function_operators
{
    FUNCTION_PLUS = 0,
    FUNCTION_SUB,
    FUNCTION_MULT,
    FUNCTION_DIV,
    FUNCTION_END
} t_functions;

typedef int (*operator_funct)(int , int);
int sum(int y, int x);
int substract(int y, int x);
int multiply(int y, int x);
int division(int y, int x);
operator_funct *set_arr_pointer_function();
char **set_arr_of_str_pointer();

#endif /* !POINTER_H_ */