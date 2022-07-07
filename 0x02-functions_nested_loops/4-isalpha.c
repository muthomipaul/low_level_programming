#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry Point
 * @c: number c
 * _isalpha function for checking alphanumerical number
 * Return: Always
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

