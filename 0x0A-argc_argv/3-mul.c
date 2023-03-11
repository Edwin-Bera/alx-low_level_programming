#include <stdio.h>
/**
 * main -  multiplies two numbers.
 * @argc: number of arguments
 * @argv: arrary containing arguments
 * Return:0
 */
int main(int argc, char **argv)
{
	if (argc - 1 < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
