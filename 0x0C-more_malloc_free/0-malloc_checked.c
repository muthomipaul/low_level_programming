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
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

