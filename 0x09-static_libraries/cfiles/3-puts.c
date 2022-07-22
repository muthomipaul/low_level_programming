#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry Point
 * @str: character str
 * _puts function for printing a string
 * Return: Always
 */
void _puts(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
