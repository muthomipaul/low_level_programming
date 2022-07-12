#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Entry Point
 * @dest: character dest
 * @src: character src
 * _strcpy function for copies the string pointed to by src
 * Return: Always
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

