#include <stdio.h>
/**
 *main - prints the number of arguments passed into it
 * @argc: number of argumens
 * @argv: array containing arguments
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unsused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
