#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry Point
 * @n: number n
 * function for printing a diagonal in terminal
 * Return: Always
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		if (i == n - 1)
			continue;
		for (j = 0; j < i + 1; j++)
		{
			_putchar(' ');
		}
	}
}
