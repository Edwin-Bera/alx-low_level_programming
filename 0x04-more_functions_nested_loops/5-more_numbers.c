#include "main.h"

/**
 * more_numbers - prnts the numbers 0 - 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int outter;
	int inner;

	for (outter = 0; outter < 10; outter++)
	{
		for (inner = 0; inner <= 14; inner++)
		{
			if (inner > 9)
				_putchar('1');
			_putchar((inner % 10 + '0'));
		}
		_putchar('\n');
	}
}
