#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - main
 * @name: inp
 * @age: inp
 * @owner: inp
 *
 * Return: Pointer to the new dog (dog_t), or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *new_dog;
char *name_copy
char *owner_copy;
int name_len, owner_len;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_len = strlen(name);
owner_len = strlen(owner);

name_copy = malloc((name_len + 1) * sizeof(char));
owner_copy = malloc((owner_len + 1) * sizeof(char));

if (name_copy == NULL || owner_copy == NULL)
{
free(name_copy);
free(owner_copy);
free(new_dog);
return (NULL);
}

strncpy(name_copy, name, name_len + 1);
strncpy(owner_copy, owner, owner_len + 1);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}

