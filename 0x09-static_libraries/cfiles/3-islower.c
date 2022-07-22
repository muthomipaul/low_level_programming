#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point
 * @c:  checking lower case
 * Main function for checking lower case
 * Return: Always
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
