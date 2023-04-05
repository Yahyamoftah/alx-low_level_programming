#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - func returnsb natural square root of any number
 * @n: the number
 *
 * Return: returns square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - func recurses to find the real
 * square root 
 * @n: the number 
 * @i: iterator
 *
 * Return: the resulting square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
