#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Entry Point
 * @str: char str
 * 
 * Return: Always
 */
char *_strdup(char *str)
{
	int i, j;
	char *dup;

	dup = (char *) malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		return (str);
	}
	for (i = 0; str[i]; ++i)
		;
	dup = (char *) malloc((i + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (dup);
	}
	for (j = 0; j <= i; ++j)
	{
		dup[j] = str[j];
	}
	return (dup);
}

