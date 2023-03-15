#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: initialising character
 * Return: if @size > 0pointer to the initialised array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size < 1)
		return (NULL);
	char *ptr = malloc(size);
	int i;

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
