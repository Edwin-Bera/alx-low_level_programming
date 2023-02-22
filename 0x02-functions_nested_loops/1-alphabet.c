#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);

#endif
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
