#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Entry Point
 * @n: int n
 * Return: Always
 */
int is_prime_number(int n)
{
	int divider;

	if (n == divider)
	{
		return (1);
	}
	if (n % divider == 0)
	{
		return (0);
	}
	return (is_prime_number(n, divider + 1));
}

