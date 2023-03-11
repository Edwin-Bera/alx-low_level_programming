#include <stdio.h>
#include <stdlib.h>
/**
 * main -  adds positive integers
 * @argc: number of arguments
 * @argv: arrary containing arguments
 * Return:0
 */
int main(int argc, char **argv)
{
	int num = 0;
	int i = 1;
	int inner;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		for (inner = 0; argv[i][inner]; inner++)
			if (!(argv[i][inner] >= '0' && argv[i][inner] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);
	return (0);
}
