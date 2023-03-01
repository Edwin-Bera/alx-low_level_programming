#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the beginning of the string
 */
void rev_string(char *s)
{
	int index = 0;
	int revIndex = 0;

	while (s[index] != '\0')
		index++;
	index -= 1;

	char rev = s[0];

	for (; index >= 0; index--)
	{
		rev[revIndex] = s[index];
		revIndex++;
	}
	for (; rev[index]; index++)
		s[index] = rev[index];
}
