#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a string whose contents are equal to @s1 + @s2
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
		while (s1[size1])
			size1++;
	if (s2 != NULL)
		while (s2[size2])
			size2++;
	size2++;

	ptr = malloc(size1 + size2);
	if (ptr == NULL)
		return (NULL);

	for (; i < size1; i++)
		ptr[i] = s1[i];

	if (size2 == 1)
		ptr[size1] = '\0';
	else
		for (i = 0; i < size2; i++)
			ptr[size1 + i] = s2[i];
	return (ptr);
}
