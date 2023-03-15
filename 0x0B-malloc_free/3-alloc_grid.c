#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int c = 0, r = 0;

	if (width < 1 || height < 1)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));

	for (; r < height; r++)
	{
		array[r] = (int *)malloc(width * sizeof(int));
		if (array[r] == NULL)
			return (NULL);

	for (r = 0; r < height; r++)
		for (c = 0; c < width; c++)
			array[r][c] = 0;
	return (array);
}
