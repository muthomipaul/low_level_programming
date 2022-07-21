#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Entry Point
 * @x: int x
 * @y: int y
 * Main function for concatenating two strings
 * Return: Always
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

