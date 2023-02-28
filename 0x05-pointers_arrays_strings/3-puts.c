#include "main."
/**
 * _puts -prints a string
 * @str: points to the beginning of the string
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		_putchar(str[index]);

	_putchar('\n');
}
