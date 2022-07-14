#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcat - Entry Point
 * @dest: character dest
 * @src: character src
 * Main function for concatenating two strings
 * Return: Always
 */
char *_strcat(char *dest, char *src)
{
	{
		int i, j;

		i = 0;
		j = 0;

		while (dest[i] != '\0')
			i++;

		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}

		dest[i] = '\0';

		return (dest);
	}
}

