#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - creates a file
 * @filename: name of the file
 * @text_content: text to br written into the file
 * Return: 1 if successful, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int err;
	int file = open(filename, O_RDWR | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	err = write(file, text_content, strlen(text_content));
	close(file);
	if (err == -1)
		return (-1);

	return (1);

}
