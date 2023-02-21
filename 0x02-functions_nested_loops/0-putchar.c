#include "main.h"

/**
 * main - prints _putchar
 * Return: 0
 */
int main(void)
{
	char put[] = "_putchar/n";
	int index;

	for(index = 0; put[index]; index++)
	       _putchar(put[index]);	

	return (0);
}
