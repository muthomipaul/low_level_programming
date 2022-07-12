#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry Point
 * @s: character s
 * rev_string function for reversing a string
 * Return: Always
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	j = strlen(s) - 1;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++, j--;
	}
}

