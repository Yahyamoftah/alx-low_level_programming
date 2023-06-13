#include "main.h"
#include <stdlib.h>

/**
 * create_array - man
 * @size: srt
 * @c: str
 * Return: zeroo
 */

char *create_array(unsigned int size, char c)
{
char *tt;
unsigned int x;

if (size == 0)
{
return (NULL);
}

tt = malloc(sizeof(char) * size);

if (tt == NULL)
{

return (NULL);
}

for (x = 0; x < size; x++)
{
tt[x] = c;
}

return (tt);
}
