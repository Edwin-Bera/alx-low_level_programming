#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a two dimensional int array
 * @grid: a two dimentional aray
 * @height: rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
