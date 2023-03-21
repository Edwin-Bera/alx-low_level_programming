#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: a struct of type dog
 * @name: a c-string holding the name of the dog
 * @owner: a c-string holding the name of the dog
 * @age: age of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}