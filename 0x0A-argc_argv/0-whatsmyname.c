#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints it's own name
 * @argc: number of arguments
 * @argv: arrary containing arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
