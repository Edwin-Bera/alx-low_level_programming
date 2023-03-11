#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints it's own name
 * @argc: number of arguments
 * @argv: arrary containing arguments
 * Return:0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
