#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the input
 * Return: the last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
		c *= -1;
	c %= 10;
	_putchar(c);
	return (c);
}
