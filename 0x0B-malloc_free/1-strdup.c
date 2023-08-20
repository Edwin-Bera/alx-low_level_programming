#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copies the provided string
 * @str: the inputed string
 * Return: a pointer to the firls element of the pointer
 */
char *_strdup(char *str)
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
