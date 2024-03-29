#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Entry Point
 * @cmp:pointer to function cmp
 * @size: int size
 * @array: int array
 * Return: Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

