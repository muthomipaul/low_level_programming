#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Entry Point
 * @dest: character dest
 * @src: character src
 * @n: int n
 * Main function for concatenating two strings
 * Return: Always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
