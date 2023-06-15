#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main
 * @b: num of bytes
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
