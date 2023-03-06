#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: char array (input)
 * @b: the fill in character
 * @n: bytes of memory to be filled in
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
