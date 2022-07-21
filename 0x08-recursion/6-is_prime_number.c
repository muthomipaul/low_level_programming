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
	int result = prime_checker(n, n / 2);

	if (n <= 1)
		return (0);
	else if (result > 0)
		return (1);
	return (0);
}

/**
 * prime_checker - checks for prime number
 * @n: int n
 * @i: int i
 * Return: Always
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

