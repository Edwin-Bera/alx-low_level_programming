#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the matrix (a multi-dimensional array)
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int n;
	int sum = 0;

	for (n = 0; n < size; n++)
		sum += *(a + (n * size + n));

	printf("%i, ", sum);

	sum = 0;
	for (n = 0; n < size; n++)
		sum += *(a + (n * size + size - n - 1));
	printf("%i\n", sum);
}
