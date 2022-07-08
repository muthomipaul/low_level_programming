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
	int slash, space;

	if (n <= 0)
	{
		_putchar('\n';)
		return;
	}
	else
	{
		for (slash = 0; slash < n; slash++)
		{
			_putchar('\\');
			_putchar('\n');
			if (slash == n - 1)
			continue;
			for (space = 0; space < space + 1; space++)
			{
				_putchar(' ');
			}
		}
	}
}

