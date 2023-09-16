#include "dog.h"
/**
 * init_dog - initialises a dog struct
 * @d: The structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
