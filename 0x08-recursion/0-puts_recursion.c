#include "main.h"
/**
 * _puts_recursion _ prints a string, followed by a new line.
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	putchar('\n');
}
