#include "main.h"

/**
 * print_square - draws a square of the specified size
 * @size: the length and width of the square
 * Return: void
 */
void print_square(int size)
{
	int index;
	int inner;

	for (index = 0; index < size; index++)
	{
		for (inner = 0; inner < size; inner++)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
