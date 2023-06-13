#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - str
 * @s1: str
 * @s2: str
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
unsigned int size1 = 0, size2 = 0;
char *src_ptr, *dest_ptr;

src_ptr = s1;
if (s1 != NULL)
{
while (*src_ptr++)
size1++;
}
else
s1 = "";

src_ptr = s2;
if (s2 != NULL)
{
while (*src_ptr++)
size2++;
}
else
s2 = "";

dest_ptr = malloc(size1 + size2 + 1);
if (!dest_ptr)
return (NULL);

src_ptr = dest_ptr;
while (*s1)
*src_ptr++ = *s1++;
while (*s2)
*src_ptr++ = *s2++;
*src_ptr = '\0';

return (dest_ptr);
}

