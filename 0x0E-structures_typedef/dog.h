#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - main
 * @name: input
 * @age: input
 * @owner: input
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
