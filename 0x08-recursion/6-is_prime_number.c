#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Entry Point
 * @n: int n
 * @c: int c
 * Return: Always
 */
int is_prime_number(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		} else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - checks for prime number
 * @n: int n
 * Return: Always
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

