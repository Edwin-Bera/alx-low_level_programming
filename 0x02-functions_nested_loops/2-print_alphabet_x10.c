#include "main.h"
/**
 * print_alphabet_x10 - prints the lowecase alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char letter;

	for (; n <= 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			 _putchar(letter);
		_putchar('\n');
	}

}
