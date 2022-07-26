#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - Entry Point
 * @grid: int grid
 * @height: int height
 *
 * Return: Always
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

