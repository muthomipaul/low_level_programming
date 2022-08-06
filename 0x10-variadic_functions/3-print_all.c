#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Entry Point
 * @list: list
 * Return: Always
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - Entry Point
 * @list: list
 * Return: Always
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Entry Point
 * @list: list
 * Return: Always
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_str - Entry Point
 * @list: list
 * Return: Always
 */

void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - Entry Point
 * @format: char format
 * Return: Always
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *sep = "";

	printTypeStruct printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", sep);
				printType[j].printer(list);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}



