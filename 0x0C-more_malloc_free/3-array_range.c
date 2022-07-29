#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - Entry Point
 * @min: int min
 * @max: int max
 * Return: Always
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}

