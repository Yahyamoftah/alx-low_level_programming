#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - main
 * @s1: str
 * @s2: str
 * @n: value
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    unsigned int len1, len2, concat_len, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    concat_len = len1 + n;

    ptr = malloc(sizeof(char) * (concat_len + 1));
    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        ptr[i] = s1[i];

    for (j = 0; j < n; j++)
        ptr[i++] = s2[j];

    ptr[i] = '\0';

    return (ptr);
}

