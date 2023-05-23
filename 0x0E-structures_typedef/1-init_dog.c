#include "dog.h"
/**
 * init_dog - this initializes a variable of type struct dog
 * @d: the pointer to struct dog
 * @name: the pointer to character array used to fill in member
 * @age: the pointer to character array used to fill in member
 * @owner: the pointer to character array used to fill in member
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
