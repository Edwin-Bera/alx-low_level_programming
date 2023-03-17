#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: secind string
 * @n: number of bytes to take from the second string
 * Return: pointer to the second string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, num1 = 0, num2 = 0;

	if (s1 != NULL)
		for (; s1[i]; i++)
			num1++;
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
			num2++;
		num2++;
	}
	if (num2 + num1 == 0)
		return ('\0');
	if (n < num2 - 1)
		num2 = n;

	str = malloc(num1 + num2);

	if (str == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < num1; i++)
			str[i] = s1[i];

	if (s2 != NULL)
		for (i = 0; i < num2; i++)
			str[i + num1] = s2[i];

	str[num1 + num2] = '\0';
	return (str);
}

