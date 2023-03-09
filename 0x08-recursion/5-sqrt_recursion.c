#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: natural square root
 */
 int _sqrt_recursion(int n)
{
	int d = 1;

	if (d > n / 2)
		return (-1);
	else if (n / d == d)
		return (d);
	else
	{
		d++;
		return (_sqrt_recursion(n));
	}
}
