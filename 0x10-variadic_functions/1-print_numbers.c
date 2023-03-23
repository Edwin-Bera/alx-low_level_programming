#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (n > 0)
	{
		va_start(ptr, n);
		for (; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i + 1 != n && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ptr);
	}
}
