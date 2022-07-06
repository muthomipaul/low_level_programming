#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @c: number c
 * _isalpha function for checking alphanumerical number
 * Return: Always
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	} else
	{
		return (0);
	}
}

