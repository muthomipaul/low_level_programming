#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - Entry Point
 * @n: int n
 * @index: int index
 *
 * Return: Always
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | 1 << index;
		return (1);
	}
}

