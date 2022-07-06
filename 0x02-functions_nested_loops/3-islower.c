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
	int letter = islower(c);

	if (letter > 0)
	{
		return (1);
	} else
	{
		return (0);
	}
}

