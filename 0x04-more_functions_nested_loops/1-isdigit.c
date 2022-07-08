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
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

