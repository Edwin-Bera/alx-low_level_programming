#include <stdio.h>
/**
 * fizzBuzz - prints numbers 1 -100
 * prints Fizz in place of a multiple of three
 * prints Buzz in place of a multiple of five
 * prints FizzBuzz when a number is a number is a multiple of both
 * Return: void
 */
void fizzBuzz(void);

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	fizzBuzz();

	return (0);
}
/**
 * fizzBuzz - prints numbers 1 -100
 * prints Fizz in place of a multiple of three
 * prints Buzz in place of a multiple of five
 * prints FizzBuzz when a number is a number is a multiple of both
 * Return: void
 */
void fizzBuzz(void)
{
	int num = 0
		for (; num <= 100; num++)
		{
			if (num % 3 == 0 && num % 5 == 0)
				printf("FizzBuzz");
			else if (num % 3 == 0)
				printf("Fizz");
			else if (num % 5 == 0)
				printf("Buzz");
			else
				printf("%i", num);
		}
	putchar('\n');
}
