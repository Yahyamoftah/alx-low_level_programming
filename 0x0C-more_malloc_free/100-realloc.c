#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - main
 * @ptr: ptr
 * @old_size: inp
 * @new_size: inp
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
else
return (new_ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size < old_size)
memcpy(new_ptr, ptr, new_size);
else
memcpy(new_ptr, ptr, old_size);

free(ptr);

return (new_ptr);
}

