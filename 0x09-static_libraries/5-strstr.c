#include "main.h"
/**
 * _strstr -  finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: input
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int index = 0;
	int inner;

	for (; haystack[index]; index++)
		if (haystack[index] == needle[0])
			for (inner = 1; needle[inner] == haystack[index + inner]; inner++)
				if (!(needle[inner + 1]))
					return (&haystack[index]);
	return ('\0');
}
