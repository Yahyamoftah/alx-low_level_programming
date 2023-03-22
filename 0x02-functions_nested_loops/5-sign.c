#include "main.h"

/**
 * print_sign - print sign of the number
 * @n: integer 
 *
 * Return: 1 and print + if n > zero,
 *         0 and print 0 if n = zero,
 *        -1 and print - if n < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
