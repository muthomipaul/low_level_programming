#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry Point
 * @n:  number n
 * Main function for printing sign of a number
 * Return: Always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	} else if (n == 0)
	{
		_putchar ('0');
		return (0);
	} else
	{
		_putchar ('-');
		return (-1);
	}
}

