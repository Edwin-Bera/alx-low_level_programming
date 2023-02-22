#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 * Return: nothing is returned
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour < 24)
	{
		if (hour < 10)
		{
			_putchar('0');
			_putchar(hour + '0');
		}
		else
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
		}

		_putchar(':');
		_putchar(min / 10 + '0');
		_putchar(min % 10 + '0');
		min++;
		if (min == 60)
		{
			hour++;
			min = 0;
		}
		_putchar('\n');
	}
}
