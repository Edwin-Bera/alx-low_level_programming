#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text to br written into the file
 * return: 1 if successful, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int err;
	int file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);

	if (file == -1 || text_content == NULL)
		return (-1);

	err = write(file, text_content, strlen(text_content));
	close(file);
	if (err == -1)
		return (-1);

	return (1);

}
