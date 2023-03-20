#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: a struct of type dog
 * @name: a c-string holding the name of the dog
 * @owner: a c-string holding the name of the dog
 * @age: age of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
