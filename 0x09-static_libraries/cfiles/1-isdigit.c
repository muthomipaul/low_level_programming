#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Entry Point
 * @c: number c
 * Main function for prints the last digit of a number
 * Return: Always
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
