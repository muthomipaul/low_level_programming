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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

