#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: the string
 * Return: converted string
 */

char *leet(char *c)
{
	int index;
	int leetIndex;
	char leet[8] = "OLEA??T";

	for (index = 0; c[index] != '\0'; index++)
		for (leetIndex2 = 0; leetIndex <= 7; leetIndex++)
			if (c[index] == leet[leetIndex] || c[index] - 32 == leet[leetIndex])
				c[index] = leetIndex + '0';
	return (c);
}
