#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to a variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	if (name == NULL)
		name = "";
	else
		d->name = name;

	if (owner == NULL)
		owner = "";
	else
		d->owner = owner;

	if (age == NULL)
		d->age = 0;
	else
		d->age = age;

}
