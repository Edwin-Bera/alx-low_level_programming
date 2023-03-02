#include "main.h"

/**
 * _strncpy - appends the string src to the begining of dest
 * @dest: destinaton
 * @src: source
 * @n: number of characters o be copied
 * Return: the full string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	for (; src[counter] != '\0' && counter <= n - 1; counter++)
		dest[counter] = src[counter];
	for (; counter < n; counter++)
		dest[counter] = '\0';

	return (dest);
}
