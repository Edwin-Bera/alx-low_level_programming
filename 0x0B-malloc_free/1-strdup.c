#include <stdlib.h>
#include "main.h"
/**
 * _stdrup - returns a copy of the provided string
 * @str: the user provided string
 * Return: a pointer to the first element in the sequence
 */
char *_stdrup(char str)
{
	int size = 0, i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	do
		size++;
	while (str[size]);

	size++;

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
