#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - Entry Point
 * @n: int n
 *
 * Return: Always
 */
void print_binary(unsigned long int n)
{
	int printbin = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(printbin);
}

