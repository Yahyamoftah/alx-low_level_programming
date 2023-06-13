#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - main
 * @ac: arg
 * @av: arg
 * Return: ptr
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

len = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
len++;
j++;
}
len++;
}

str = malloc((len + 1) * sizeof(char));
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
str[k] = av[i][j];
j++;
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';

return (str);
}

