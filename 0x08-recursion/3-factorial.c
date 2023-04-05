#include "main.h"

/**
 * factorial - func returns the factorial of any number
 * @n: the number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
