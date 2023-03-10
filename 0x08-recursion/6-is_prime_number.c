#include "main.h"

/**
 * primeCheck - checks if a number is a prime number
 * @n: the number
 * @check: a number @a will be checked against
 * Return: 1 if prime, else 0
 */
int primeCheck(int n, int check)
{
	if (check == 1)
		return (1);
	if (n % check == 0)
		return (0);
	return (primeCheck(n, check - 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *  otherwise return 0
 *  @n: the number to be checked
 *  Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primeCheck(n, n - 1));
}
