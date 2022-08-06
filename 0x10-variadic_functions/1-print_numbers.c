#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry Point
 * @separator: char separator
 * @n: int n
 * Return: Always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list argc;

	va_start(argc, n);
	for (i = 0; i < n; i++)
	{
		{
			printf("%d", va_arg(argc, int));
			if (separator && i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(argc);
	printf("\n");
}

