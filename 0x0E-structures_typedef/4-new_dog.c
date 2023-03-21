#include <stdlib.h>
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
/**
 * new_dog - creates an object of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: am initialised variable of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	init_dog(ptr, name, age, owner);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
