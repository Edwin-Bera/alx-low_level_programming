#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: points to the beginning of the string
 * Return: int
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;

	return (counter);
}
