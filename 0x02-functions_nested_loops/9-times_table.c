#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: nothing
 */
void times_table(void)
{
	int value;

	{
		for (int col = 0; col < 10; col++)
		{
			value = row * col;
			if (value < 10)
			{
				_putchar(' ');
				_putchar(value + '0');
			}
			else
			{
				_putchar(value / 10 + '0');
				_putchar(value % 10 + '0');
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
