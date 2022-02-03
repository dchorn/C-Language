##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	my_lib.a

SRCS	=	src/basic/my_getnbr.c 						\
			src/basic/my_putnbr.c 						\
			src/basic/my_putchar.c 						\
			src/basic/my_putstr.c 						\
			src/basic/my_strlen.c 						\
			src/my_char/my_char_is_alpha.c 				\
			src/my_char/my_char_is_alphanumeric.c 		\
			src/my_char/my_char_is_in_str.c 			\
			src/my_char/my_char_is_lowercase.c 			\
			src/my_char/my_char_is_number.c 			\
			src/my_char/my_char_is_uppercase.c 			\
			src/my_char/my_char_swap.c 					\
			src/my_str/my_str_count_char.c 				\
			src/my_str/my_str_file_extention.c 			\
			src/my_str/my_str_in_array.c				\
			src/my_str/my_str_is_alpha.c 				\
			src/my_str/my_str_is_alphanumeric.c 		\
			src/my_str/my_str_is_in_str.c 				\
			src/my_str/my_str_is_lowercase.c 			\
			src/my_str/my_str_is_number.c 				\
			src/my_str/my_str_is_uppercase.c 			\
			src/my_str/my_str_reverse.c 				\
			src/my_str/my_strcat.c 						\
			src/my_str/my_strcmp.c 						\
			src/my_str/my_strncmp.c 					\
			src/my_str/my_strcpy.c 						\
			src/my_int/my_int_swap.c 					\
			src/my_arr/my_arraycpy.c 					\
			src/my_arr/my_arraylen.c 					\
			src/my_arr/my_print_array.c 				\
			src/my_arr/my_add_str_in_array.c 			\
			src/my_arr/my_delete_str_in_array.c         \
			src/my_arr/my_count_str_in_array.c 			\
			src/my_arr/my_arraycat.c 					\
			src/my_arr/max_strlen_in_array.c			\
			src/my_arr/min_strlen_in_array.c			\
			src/alloc/my_alloc_array.c 					\
			src/alloc/my_arrdup.c 						\
			src/alloc/my_free_array.c 					\
			src/alloc/my_realloc_array.c 				\
			src/alloc/my_realloc.c 						\
			src/alloc/my_strdup.c 						\

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

LIBCOMP	=	ar -rcs

IDIR	=	include/

CFLAGS	+=	-I $(IDIR)
CFLAGS	+=	-Wall -Wextra
CFLAGS	+=	-Wpedantic -Wno-long-long
CFLAGS	+=	-Werror
CFLAGS  +=  -g

RM	=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
		$(LIBCOMP) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all