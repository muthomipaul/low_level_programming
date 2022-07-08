#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry Point
 * function for printing numbers 0 to 9
 * Return: Always
 */

void print_numbers(void)
{
	int i, x;

	for (i = 0; i <= 10; i++)
	{
		x = i < 10 ? (i + '0') : '\n';
		_putchar(x);
	}
}

