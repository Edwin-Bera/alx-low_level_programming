#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the beginning of the string
 */
void rev_string(char *s)
{
	char revS;
	int index = 0, int revIndex = 0;

	while (s[index] != '\0')
	{
		revS[index] = s[index];
		index++;
	}
	index -= 1;

	for (; index >= 0; index--)
	{
		s[revindev] = revS[revIndex];
		revIndex++;
	}
}
