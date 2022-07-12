#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry Point
 * @a: integer a
 * @b: integer b
 * swap_int function for values of two integers
 * Return: Always
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

