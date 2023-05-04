#include "main.h"

/**
 * _abs - returns absolute value of an integer
 * @c: input, na integer
 * Return: absolute value of the input.
 */
int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}
