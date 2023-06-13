#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - main
 * @s1: str
 * @s2: str
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
char *conc;
unsigned int length1 = 0;
unsigned int length2 = 0;
unsigned int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Get the lengths of the strings */
while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

conc = malloc((length1 + length2 + 1) * sizeof(char));
if (concatenated == NULL)
return NULL;

for (i = 0; i < length1; i++)
conc[i] = s1[i];

for (j = 0; j < length2; j++)
conc[length1 + j] = s2[j];

conc[length1 + length2] = '\0';

return conc;
}

