#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry Point
 * @c: number c
 * Main function for prints the last digit of a number
 * Return: Always
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		
	}

	return (0);
}

