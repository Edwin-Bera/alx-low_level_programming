#include <stdio.h>
/**
 * main -  prints the size of various data types
 * Description: prints the size of char, int, long int, long long int, float
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n",(unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));
	return (0);
}
