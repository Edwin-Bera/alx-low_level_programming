#include "main.h"
/**
 *  * print_alphabet - prints alphabet in lowercase
 *   * Return: does not return a value
 *    */
void print_alphabet(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
