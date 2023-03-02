#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @c: the string
 * Return: a string whose lettersy are only uppercase
 */
char *string_toupper(char *c)
{
	int index = 0;
	for (; c[index] != '\0'; index++)
		if (c[index] >= 'a' && c[index] <= 'z')
			c[index] = 32;
	return (c);
}
