#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ is printed
 * Return: void
 */
void print_line(int n)
{
	int index;

	for (index = 0; index < n + 1; index++)
		_putchar('_');
}
