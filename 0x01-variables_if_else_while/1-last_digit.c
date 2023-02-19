#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and the last number
 * Description: prints whether the last number is greater than 5, 6 or 0.
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (n == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
