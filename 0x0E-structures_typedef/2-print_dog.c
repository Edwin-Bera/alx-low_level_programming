#include <stdio.h>
#include "dog.h"
/**
 * print_dog -prints contents of a struct of type dog
 * @d: the struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "nil";
		if (d->owner == NULL)
			d->owner = "nil";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
