#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the beginning of the string
 */
void rev_string(char *s)
{
	int index = 0;
	int revIndex = 0;
	char rev;

	while (s[index] != '\0')
		index++;
	index -= 1;

	for (; index != revIndex; revIndex++)
	{
		rev = s[revIndex];
		s[revIndex] = s[index];
		s[index] = rev;
		index--;
	}
}
