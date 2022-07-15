#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * leet - Entry Point
 * @s: character s
 * Main function for concatenating two strings
 * Return: Always
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}

