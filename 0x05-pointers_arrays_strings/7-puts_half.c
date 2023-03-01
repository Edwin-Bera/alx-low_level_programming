#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int index = 0;
	int half;

	while (str[index] != '\0')
		index++;
	index -= 1;

	if (index % 2)
		half = (index - 1) / 2;
	else
		half = index / 2;

	for (; half <= index; half++)
		_putchar(str[half]);
}
