#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}
ssize_t read_textfile(const char *filename, size_t letters)
{
	int readFile = open(filename, O_RDONLY);
	char text[letters];
	ssize_t num;

	if (readFile < 0)
		return (0);

	num = read(readFile, text, letters);
	if (num < 0)
		return (0);
	else if (num > 0)
		letters = num;
	//text[letters] = '\0';

	//for(; *text != '\0'; text++)
	//	_putchar(*text);

	close(readFile);

	if (write(2, &text, letters) < letters)
		return (0);

	return (letters);
}

