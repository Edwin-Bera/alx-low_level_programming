#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character _ is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int index;
	int inner;

	for (index = 0; index < n; index++)
	{
		for (inner = index; inner < index; inner++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
	if (n < = 0)
		_putchar('\n');
}
