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
	void *mem;

	mem = malloc(b);

	if (!mem)
		exit(98);

	return (mem);
}

