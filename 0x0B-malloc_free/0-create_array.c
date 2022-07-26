#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Entry Point
 * @size: int size
 * @c: char c
 * create_array for creating a block a memory for char
 * Return: Always
 */
char *create_array(unsigned int size, char c)
{
	char *block;
	unsigned int i;

	block = malloc(sizeof(Char) * size);
	if (block == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		block[i] = c;
	}
}

