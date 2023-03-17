#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: first int in the array
 * @max: last int in the array
 * Return: pointer  to int array
 */
int *array_range(int min, int max)
{
	int *counter;
	int num = max - min + 1;

	if (num < 1)
		return (NULL);

	counter = malloc(sizeof(int) * num);
	if (counter == NULL)
		return (NULL);

	for (num = 0; min + num <= max; min++)
		counter[num] = min + num;

	return (counter);
}
