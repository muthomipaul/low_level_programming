#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: char separator
 * @n: int n
 * Return: Always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argc;
	unsigned int i;
	char *str;

	va_start(argc, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argc, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

