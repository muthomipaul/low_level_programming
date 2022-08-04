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
	int index;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if (y == TRUE)
				return (index);
		}
	}

	return (-1);

}

