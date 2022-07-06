#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Main function for printing _putchar
 * Return: Always
 */
int main(void)
{
	char n[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}

