#include "main.h"

/**
 *_isalpha- returns an alphabetic character is detected, else it returns 0
 * @c: is theletter passed for evaluation
 * Return: 1 if alphabetic, else 0
 */
int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z')) || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
