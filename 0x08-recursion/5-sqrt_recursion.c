#include "main.h"

/**
 * find_sqrt - finds the square root of the given number
 * @num: the numer
 * @sqrt: possible value of square root t be tested
 * Return:: square root
 */
int find_sqrt(int num, int sqrt)
{
	if (sqrt * sqrt == num)
		return (sqrt);
	else if (sqrt == num / 2)
		return (-1);
	else
		return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int d = 0;

	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, d));
}
