#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: the fist int
 * @b: the second int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*a = temp;
}
