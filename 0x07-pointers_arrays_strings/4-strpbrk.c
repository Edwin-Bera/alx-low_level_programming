#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: the string
 * @accept: the prefix substring
 * Return: a pointer to the first match
 */
char *_strpbrk(char *s, char *accept)
{
	int inner, index = 0;

	for (; s[index]; index++)
		for (inner = 0; accept[inner] != '\0'; inner++)
			if (s[index] == accept[inner])
				return (&s[index]);
	return ('\0');
}
