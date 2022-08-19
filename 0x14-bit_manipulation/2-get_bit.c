#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - Entry Point
 * @n: int n
 * @index: int index
 *
 * Return: Always
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}

