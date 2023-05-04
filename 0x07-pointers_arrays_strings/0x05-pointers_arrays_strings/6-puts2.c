#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: the string
 */
void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		if (!(index % 2))
			_putchar(str[index]);
	_putchar('\n');
}
