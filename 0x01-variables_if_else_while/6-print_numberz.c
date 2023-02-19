#include <stdio.h>

/**
 * main - prints numbers 0-9
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');

	putchar('\n');

	return (0);
}
