#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry Point
 * function for printing numbers 0 to 14 10 times
 * Return: Always
 */
void more_numbers(void)
{
	int i, j;

	while (i <= 10)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}

