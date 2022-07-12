#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry Point
 * @str: character str
 * print_rev function for printing a string in reverse
 * Return: Always
 */
void print_rev(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = len - 1 ; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

