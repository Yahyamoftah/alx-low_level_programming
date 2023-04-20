#include "function_pointers.h"

/**
 * array_iterator - The main
 * @array: an array
 * @size: an input
 * @action: a pinter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
