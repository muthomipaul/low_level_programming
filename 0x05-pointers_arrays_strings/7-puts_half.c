#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - Entry Point
 * @str: character str
 * puts_half function for printing half of a string
 * Return: Always
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str) - 1;

	i = len / 2 + 1;

	while (i <= len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

