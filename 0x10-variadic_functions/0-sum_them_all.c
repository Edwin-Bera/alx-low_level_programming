#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the last fixed argument in the function
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
