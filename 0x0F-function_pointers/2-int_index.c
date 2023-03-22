#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array of integers we will search
 * @size: size of the array
 * @cmp: a pointer to the function used to compare values
 * Return: -1 if the desired value is not found, else returns the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && size > 0 && cmp != NULL)
		for (index = 0; index < size && array != NULL; index++)
		{
			if (cmp(*array) > 0)
				return (index);
			array++;
		}
	return (-1);
}
