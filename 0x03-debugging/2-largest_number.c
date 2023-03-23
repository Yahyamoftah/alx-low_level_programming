#include "main.h"

/**
 * largest_number - returns the largest integar of the 3 numbers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: returns largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}