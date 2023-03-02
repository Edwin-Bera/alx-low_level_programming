#include "main.h"

/**
 * _strcmp - compares two strings
 * returns an int greater than 0 if s1 > s2
 * returns an int less than 0 if s1 < s2
 * returns an int equal to 0 if s1 == s2
 *
 * @s1: first strung
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0' ; index++)
	{
		if (s1[index] > s2[index])
			return (15);
		else if (s1[index] < s2[index])
			return (-15);
	}
	if (s1[index] > s2[index])
		return (15);
	else if (s1[index] < s2[index])
		return (-15);
	else
		return (0);
}
