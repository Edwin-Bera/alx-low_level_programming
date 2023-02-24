#include "main.h"

/**
 * print_most_numbers - the numbers, from 0 to 9, followed by a new line
 * 2 and 4 are not printed
 * Return: void
 */
void print_most_numbers(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		if (num == 2 || num || 4)
			continue;
		_putchar(num + '0');
	}
	_putchar('\n');
}
