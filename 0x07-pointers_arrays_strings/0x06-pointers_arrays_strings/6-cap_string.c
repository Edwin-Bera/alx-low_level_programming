#include "main.h"

/**
 * cap_string -  Capitalises the first letter of each word
 * @c: the string
 * Return: a string whose words begin all with an uppercase letter
 */
char *cap_string(char *c)
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
				c[index - 1] == '{' ||
				index == 0)
			c[index] -= 32;
		index++;
	}
	return (c);
}
