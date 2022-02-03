/*
** EPITECH PROJECT, 2020
** my_lib.h
** File description:
** my_lib
*/

#ifndef MY_LIB_H_
#define MY_LIB_H_

void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char *str);
void my_str_reverse(char *str);
int my_char_is_alpha(char c);
int my_char_is_number(char c);
int my_char_is_uppercase(char c);
int my_char_is_lowercase(char c);
int my_char_is_alphanumeric(char c);
int my_str_is_alpha(char *str);
int my_str_is_number(char *str);
int my_str_is_alphanumeric(char *str);
int my_str_is_uppercase(char *str);
int my_str_is_lowercase(char *str);
int my_strcmp(char *str_one, char *str_two);
int my_strncmp(char *str_one, char *str_two, int n);
int my_str_count_char(char *str, char c);
int my_char_is_in_str(char *str, char character);
int my_str_is_in_str(char *str_one, char *str_two);
int my_str_file_extention(char *str_one, char *str_two);
int my_getnbr(char *str);
void my_putnbr(int nbr);
char *my_strcat(char *dest, char *source);
void my_int_swap(int *nb_one, int *nb_two);
void my_char_swap(char *src_one, char *src_two);
char *my_strdup(char *str);
int my_arraylen(char **arr);
char *my_strcpy(char *dest, char *source);
void my_print_array(char **arr);
char **my_alloc_array(int y, int x);
char **my_arraycpy(char **dest, char **source);
void my_free_array(char **arr);
int my_str_in_array(char **arr, char *str);
int my_count_str_in_array(char **arr, char *str);
char *my_realloc(char *str, int space);
char **my_realloc_array(char **arr, int space);
char **my_arrdup(char **arr);
char **my_add_str_in_array(char **arr, char *str);
char **my_delete_str_in_array(char **arr, char *str);
char **my_arraycat(char **dest, char **src);
int max_strlen_in_array(char **arr);
int min_strlen_in_array(char **arr);

#endif /* !MY_LIB_H_ */
