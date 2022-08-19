#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Entry Point
 * @n: int n
 * @m: int m
 *
 * Return: Always
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipbit;
	unsigned long int xor;

	xor = n ^ m;

	flipbit = 0;

	while (xor != 0)
	{
		if ((xor & 1) == 1)
		{
			flipbit++;
		}
		xor = xor >> 1;
	}
	return (flipbit);
}

