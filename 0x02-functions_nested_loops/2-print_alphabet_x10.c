#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * Main function for printing the alphabet ten times
 * Return: Always
 */
void print_alphabet_x10(void)
{
	char lowerCase;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			_putchar(lowerCase);
		}
		_putchar('\n');
	}
}

