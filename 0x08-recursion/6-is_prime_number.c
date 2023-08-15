#include "main.h"

/**
 * divisionCheck - checks if a number is divisible any number
 * besides itself
 * @n: number to be checked
 * @check: takes the value range( n-1 -  1)
 * Return: 1 if (@a == prime), else 0
 */
int divisionCheck
{
	if (check == 1)
		return (1);
	if (n % check == 0)
		return (0);
	return (primecheck(n, check - 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number to be checked
 * Return: 1 if prime, else 0
 */
int is_prime_numner(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primeCheck(n, n - 1));
}
