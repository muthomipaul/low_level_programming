#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Entry Point
 * @dest: char dest
 * @src: char src
 * @n: int n
 * Return: Always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _realloc - Entry Point
 * @new_size: int new_size
 * @old_size: int old_size
 * @ptr: old memory block
 * Return: Always
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int min;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		min = new_size;
	else
		min = old_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	nptr = _memcpy(nptr, ptr, min);
	free(ptr);
	return (nptr);
}

