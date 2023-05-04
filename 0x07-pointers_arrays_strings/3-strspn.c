#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * @s: the string
 * @accept: the prefix substring
 * Return: length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int inner, index = 0;

	for (; s[index] != ' ' && s[index]; index++)
		for (inner = 0; accept[inner] != '\0'; inner++)
			if (s[index] == accept[inner])
			{
				counter++;
				break;
			}
	return (counter);
}
