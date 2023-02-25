#include "main.h"

/**
 * print_triangle - prints a triangle of the specified size
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int spaces;
	int draw;
	int flag;

	for (flag = size; flag > 0; flag--)
	{
		for (spaces = flag - 1; spaces > 0; spaces--)
			_putchar(' ');

		for (draw = size - spaces; draw > 0; draw--)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
