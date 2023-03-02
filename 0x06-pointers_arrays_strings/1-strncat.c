#include "main.h"

/**
 * _strncat - appends the string src to dest
 * @dest: destinaton
 * @src: source
 * @n: number of characters o be copied
 * Return: the full string
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0;
	int i = 0;

	while (dest[counter] != '\0')
		counter++;

	for (; src[i] != '\0' && i <= n; i++)
		dest[counter + i] = src[i];

	return (dest);
}
