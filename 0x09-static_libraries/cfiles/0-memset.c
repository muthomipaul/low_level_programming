#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - Entry Point
 * @s: character s
 * @b: character b
 * @n: int n
 * Main function for concatenating two strings
 * Return: Always
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}

