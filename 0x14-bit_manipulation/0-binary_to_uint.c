#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"


/**
 * _strlen - Entry Point
 * @s: char s
 *
 * Return: Always
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * binary_to_uint - Entry Point
 * @b: char b
 *
 * Return: Always
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}

