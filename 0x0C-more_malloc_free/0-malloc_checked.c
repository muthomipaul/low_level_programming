#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Entry Point
 * @b: int b
 * Return: Always
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}

