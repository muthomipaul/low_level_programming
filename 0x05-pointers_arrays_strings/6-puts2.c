#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry Point
 * @str: character str
 * puts2 function for printing characters of a string
 * Return: Always
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

