/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** test_pointer_function
*/

#include "pointer.h"

int sum(int y, int x)
{
    int res = 0;
    res = y + x;
    return (res);
}

int substract(int y, int x)
{
    int res = 0;
    res = y - x;
    return (res);
}

int multiply(int y, int x)
{
    int res = 0;
    res = y * x;
    return (res);
}

int division(int y, int x)
{
    int res = 0;
    res = y / x;
    return (res);
}

int calculate(char operator, int x, int y)
{
    int res = 0;
    int i = 0;
    operator_funct *arr = set_arr_pointer_function();
    char **name_list = set_arr_of_str_pointer();

    if (arr == NULL || name_list == NULL)
        return (0);
    
    while (i != FUNCTION_END) {
        if (operator == name_list[i][0])
            res = (*arr[i])(x, y);
        i++;
    }

    free(arr);
    free(name_list);
    return (res);
}

int main(int ac, char **av)
{
    int x = 0;
    int y = 0;
    int result = 0;
    char operator = av[2][0];

    if (ac != 4)
        return (0);
    x = atoi(av[1]);
    y = atoi(av[3]);
    result = calculate(operator, x, y);
    printf("Result = %d\n", result);
    return (0);
}