#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - declares an initialises a new object of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: a pointer to the newly created variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	init_dog(ptr, name, age, owner);
	if (ptr == NULL || ptr->name == "" || ptr->owner == "")
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}


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
		d->name = "";
	else
		d->name = name;

	if (owner == NULL)
		d->owner = "";
	else
		d->owner = owner;
	d->age = age;
}
