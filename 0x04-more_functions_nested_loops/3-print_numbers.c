#include "main.h"

/**
 * print_numbers - the numbers, from 0 to 9, followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int num = 0;

	for (; num < 10; num++)
		_putchar(num + '0');
}
