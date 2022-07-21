#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * sqrt_check - Entry Point
 * @n: int n
 * @c: int c
 * @n: number n
 * _sqrt_recursion - finds square root
 * Return: Always
 */
int sqrt_check(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c >= n / 2)
		return (-1);
	return (sqrt_check(n, c + 1));
}

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqrt_check(n, 1));
}

