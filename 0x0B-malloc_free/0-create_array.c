#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of characters and initializes each element with a specific value
 * @size: size of the array
 * @c: initialising character
 * Return: if @size > 0pointer to the initialised array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);

	if (size < 1 || !ptr)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
