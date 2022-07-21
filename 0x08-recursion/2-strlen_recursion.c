#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Entry Point
 * @s: character s
 * Main function for concatenating two strings
 * Return: Always
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

