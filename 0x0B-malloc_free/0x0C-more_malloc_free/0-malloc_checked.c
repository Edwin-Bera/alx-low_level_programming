#include <stdlib.h>
#include "main.h"
/**
  * malloc_checked - allocates memory using malloc
  * @b: amount of bytes to be reserved
  * Return: On Success, return a pointer to the allocated memory
  * On Failure, termminate function and return the code 98
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}