#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry Point
 * @s: character s
 * @accept: character accept
 * Main function for concatenating two strings
 * Return: Always
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	i++;
	}
	return (NULL);
}
