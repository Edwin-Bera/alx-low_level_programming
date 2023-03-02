#include "main.h"

/**
 * _strcat - appends the string src to dest
 * @dest: destinaton
 * @src: source
 * Return: the full string
 */
char *_strcat(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (dest[counter] != '\0')
		counter++;

	int i;

	for (i =0; src[i] != '\0'; i++)
		dest[(counter + i)] = src[i];

	return (dest);
}
