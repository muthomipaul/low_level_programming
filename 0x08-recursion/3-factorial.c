#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry Point
 * @n: int n
 * Main function for concatenating two strings
 * Return: Always
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

