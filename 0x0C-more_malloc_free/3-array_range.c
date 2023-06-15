#include <stdlib.h>

/**
 * array_range - main
 * @min: min
 * @max: max
 * Return: ptr
 */

int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return NULL;

size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return NULL;

for (i = 0; i < size; i++)
arr[i] = min++;

return arr;
}

