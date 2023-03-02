#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: the array
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int index = n - 1;
	int revIndex = 0;
	int rev;

	for (; index > revIndex; revIndex++)
	{
		rev = a[revIndex];
		a[revIndex] = a[index];
		a[index] = a[rev];
		index--;
	}
}
