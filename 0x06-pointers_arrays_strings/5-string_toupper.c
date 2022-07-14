#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Entry Point
 * @s: character s
 * Main function for concatenating two strings
 * Return: Always
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}

