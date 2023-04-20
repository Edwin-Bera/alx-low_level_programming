#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return:  pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (1)
	{
		dest[index] = src[index];
		if (src[index] == '\0')
			break;
		index++;
	}
	return (dest);
}
