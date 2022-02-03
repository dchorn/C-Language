/*
** EPITECH PROJECT, 2020
** c_library
** File description:
** set_arr_pointer_function
*/

#include "pointer.h"

operator_funct *set_arr_pointer_function()
{
    operator_funct *arr = malloc(sizeof(operator_funct) * (OPERATOR_NBR + 1));
    
    if (arr == NULL)
        return (NULL);
    arr[FUNCTION_PLUS] = &sum;
    arr[FUNCTION_SUB] = &substract;
    arr[FUNCTION_MULT] = &multiply;
    arr[FUNCTION_DIV] = &division;
    arr[FUNCTION_END] = NULL;
    return (arr);
}

char **set_arr_of_str_pointer()
{
    char **name_list = malloc(sizeof(char *) * (OPERATOR_NBR + 1));

    name_list[FUNCTION_PLUS] = OPERATOR_PLUS;
    name_list[FUNCTION_SUB] = OPERATOR_SUB;
    name_list[FUNCTION_MULT] = OPERATOR_MULT;
    name_list[FUNCTION_DIV] = OPERATOR_DIV;
    name_list[FUNCTION_END] = NULL;
    return (name_list);
}