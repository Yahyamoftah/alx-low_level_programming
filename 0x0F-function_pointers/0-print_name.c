#include "function_pointers.h"

/**
 * print_name - The main
 * @name: an inp
 * @f: a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
