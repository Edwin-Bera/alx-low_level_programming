#include "main.h"


/**
 * main - check the code
 * print_alphabet - rpints the alphabet in lowercase
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: does not return a value
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
