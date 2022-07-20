#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Entry Point
 * @a: character a
 * Main function for concatenating two strings
 * Return: Always
 */
void print_chessboard(char (*a)[8])
{

	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}

