#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Entry Point
 * @b: char b
 *
 * Return: Always
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i, add;

	add = 0;

	if (b != NULL)
	{
		for (length = 0; b[length] != '\0'; length++)
		{
			if (b[length] != 48 && b[length] != 49)
			{
				return (0);
			}
		}

		for (i = 0, length--; length >= 0; length--)
		{
			add = add + ((b[length] - '0') << i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (add);
}

