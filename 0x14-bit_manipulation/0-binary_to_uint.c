#include <stddef.h>
#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to base 10
 * @b: the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int power;
	unsigned int current;
	unsigned int index;

	for (power = 0; b[power]; power++)
		;
	if (!power)
		return (0);

	while (power)
	{
		power--;
		if (*b < '0' || *b > '2')
			return (0);

		current = *b - '0';
		if (current == 1)
			for (index = 0; index < power; index++)
				current *= 2;

		decimal += current;
		b++;
	}
	return (decimal);
}
