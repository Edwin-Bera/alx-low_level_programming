#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arrary containing arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int index = 0;

	for (; index < argc; index++)
		printf("%s\n", argv[index]);
	return (0);
}
