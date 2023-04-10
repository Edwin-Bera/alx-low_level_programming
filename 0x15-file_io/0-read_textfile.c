#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - prints out contents of a text file
 * @filename: name of file
 * @letters: number of bytees to be printed
 * Return: 0 if it fails, else ereturns number of bytes printed
 */
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

	close(readFile);

	if (write(2, &text, letters) < letters)
		return (0);

	return (letters);
}

