#include "main.h"
/**
 * _isupper - checks for uppecase letters
 * @c: the input
 * Return: Returns 1 if uppercase, else returns 0
 */
int _isupper(int c)
{
	if (c + '0' >= 'A' && c + '0' <= 'Z')
		return (1);
	else
		return (0);
}
