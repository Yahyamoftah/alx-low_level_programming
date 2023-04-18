#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - The main
 * @d: pointer
 * @name: parameter
 * @age: parameter
 * @owner: print
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
