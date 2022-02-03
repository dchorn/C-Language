/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 11/04/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** my_printf.c description:
**
*/

#include <stdio.h>
#include <stdarg.h>

void my_putnbr(int nbr)
{
	printf("%d", nbr);
}

void my_putstr(char *string)
{
	printf("%s", string);
}

void test()
{
	if (format[x] == '%' && format[x + 1] == 'c')
	{
		my_putstr(va_arg(argument, char*));
		x = x + 2;
	}
}

int my_printf(const char *format, ...)
{
	int x = 0;
	va_list argument;

	va_start(argument, format);

	printf("test %d more \n", 20);
	while (format[x] != '\0')
	{
		if (format[x] == '%' && format[x + 1] == 'd')
		{
			my_putnbr(va_arg(argument,int));
			x = x + 2;
		} else if (format[x] == '%' && format[x + 1] == 's')
		{
			my_putstr(va_arg(argument, char*));
			x = x + 2;
		}
		else if (format[x] == '%' && format[x + 1] == 'c')
		{
			my_putstr(va_arg(argument, char*));
			x = x + 2;
		}
		else if (format[x] == '%' && format[x + 1] == 'x')
		{
			my_putstr(va_arg(argument, char*));
			x = x + 2;
		}
		test();
		x++;
	}
	va_end(argument);
	return (0);
}

int main(void)
{
	my_printf("test %d more %s\n", 20, " test good");
	//my_printf("test %d more\n", 20);
	//my_printf("test %d more %d\n", 20);
	return (0);
}

//my_printf ??
//-> my_putstr
//->my_putnbr