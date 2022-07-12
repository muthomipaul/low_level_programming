#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry Point
 * @a: int a
 * @n: int n
 * print_array function for printing the elements of an integer array
 * Return: Always
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}

