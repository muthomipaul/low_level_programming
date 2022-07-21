#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry Point
 * @s: character s
 * Main function for concatenating two strings
 * Return: Always
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}

