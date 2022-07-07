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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

