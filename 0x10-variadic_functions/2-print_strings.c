#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings- prints strings followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (n > 0)
	{
		va_start(ptr, n);
		for (; i < n; i++)
		{
			if (ptr == NULL)
				printf("nil");
			else
				printf("%s", va_arg(ptr, char*));
			if (i + 1 != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
