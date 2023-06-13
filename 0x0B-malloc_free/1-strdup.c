#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - main
 * @str: st
 * Return: ptr
 */

char *_strdup(char *str)
{
char *s;
int x, y;

if (str == 0)
return (NULL);
for (x = 0; str[x] != '\0'; x++)
;
x++;
s = malloc(x *sizeof(*s));
if (s == 0)
return (NULL);
for (y = 0; y < x; y++)
s[y] = str[y];
return (s);
}
