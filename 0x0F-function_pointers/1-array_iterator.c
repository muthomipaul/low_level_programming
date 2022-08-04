#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry Point
 * @action:pointer to function action
 * @array: int array
 * @size: int size
 * Return: Always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}

