#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: an int array
 * @size: size of the array
 * @action: the function called on each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array != NULL && size > 0 && action != NULL)
		while (array != NULL && size > 0)
		{
			action(*array);
			array++;
			size--;
		}
}
