#include "dog.h"
/**
 * init_dog: initializes a variable of type struct dog
 * @d: a pointer to a variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int counter = 0;

	if (d != NULL)
	{
		if (name)
		{
			while (name[counter])
				counter++;
			d->name = malloc(counter);

			counter = 0;
			if (d->name)
			{
				while (name[counter])
					d->name[counter] = name[counter];
				d->name[counter] = '\0';
			}
		}

		d->age = age;

		counter = 0;

		if (owner)
		{
			while (owner[counter])
				counter++;
			d->owner = malloc(counter);

			counter = 0;
			if (d->owner)
			{
				while (owner[counter])
					d->owner[counter] = owner[counter];
				d->owner[counter] = '\0';
			}
		}
	}
}

