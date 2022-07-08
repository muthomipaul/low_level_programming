#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry Point
 * @size: number size
 * function for printing a triangle in terminal
 * Return: Always
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			x = j < (size + 1) - i ? ' ' : '#';
			_putchar(x);
		}
		_putchar('\n');
	}
}

