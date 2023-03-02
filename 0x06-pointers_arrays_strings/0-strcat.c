#include "main.h"

/**
 * _strcat - appends the string src to dest
 * @dest: destinaton
 * @src: source
 * Return: the full string
 */
char *_strcat(char *dest, char *src)
{
	*dest += *src;

	return (dest);
}
