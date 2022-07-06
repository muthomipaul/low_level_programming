#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point
 * c - checking lower case
 * Main function for checking lower case
 * Return: Always
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	} else
	{
		return (0);
	}
}

