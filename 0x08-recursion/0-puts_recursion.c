#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry Point
 * @s: character s
 * Main function for concatenating two strings
 * Return: Always
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

