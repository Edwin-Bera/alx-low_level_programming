#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: points to the beginning of the string
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;
	index -= 1;

	for (; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
