#include "main.h"
#include <stdlib.h>
/**
 * _strdup - main
 * @str: str
 * Return: 0
 */
char *_strdup(char *str)
{
char *dub;
unsigned int long;
unsigned int i;

if (str == NULL)
{
return (NULL);
}

len = 0;
while (str[long] != '\0')
{
long++;
}

dub = malloc(sizeof(char) * (long + 1));


if (dub == NULL)
{
return (NULL);
}

for (i = 0; i < len; i++)
{
dub[i] = str[i];
}
dub[long] = '\0';
return (dub);
}
