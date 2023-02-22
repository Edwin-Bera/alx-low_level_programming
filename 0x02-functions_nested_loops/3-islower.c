#include "main.h"

/**
 * _islower - returns 1 if a lowercase character is detected, else it returns 0
 * @c: is theletter passed for evaluation
 * Return: 1 is lowercase, else 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
