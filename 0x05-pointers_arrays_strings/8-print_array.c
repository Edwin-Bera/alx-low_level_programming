#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index + 1 != n)
			printf(", ");
		index++;
	}
	printf("\n");
}
