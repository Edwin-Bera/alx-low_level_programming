#include "main.h"

/**
 * _strcat - appends the string src to dest
 * @dest: destinaton
 * @src: source
 * Return: the full string
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0;

	while (dest[counter] != '\0')
		counter++;
	counter--;

	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[counter + i] = src[i];

	return (dest);
}
