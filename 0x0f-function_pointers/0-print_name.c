#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name defined by the string passed to it
 * @name: the sstring in question
 * @f: a pointer to the function that actually prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
