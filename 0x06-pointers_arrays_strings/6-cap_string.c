#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @c: the string
 * Return: a string whose lettersy are only uppercase
 */
char *string_toupper(char *c)
{
	int index = 0;

	while (c[index] != '\0')
	{
		while (!(c[index] >= 'a' && c[index] <= 'z'))
			index++;

		if (c[index - 1] == ',' ||
				c[index - 1] == ';' ||
				c[index - 1] == '.' ||
				c[index - 1] == '!' ||
				c[index - 1] == '\t' ||
				c[index - 1] == ' ' ||
				c[index - 1] == '\n' ||
				c[index - 1] == '?' ||
				c[index - 1] == '"' ||
				c[index - 1] == '(' ||
				c[index - 1] == ')' ||
				c[index - 1] == '{' ||
				c[index - 1] == '{')
			c[index] -= 32;
	return (c);
}
