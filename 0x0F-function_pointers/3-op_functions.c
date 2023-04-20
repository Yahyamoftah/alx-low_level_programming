#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - The main
 * @a: an input
 * @b: an input
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The main
 * @a: an input
 * @b: an input
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The main
 * @a: an input
 * @b: an innpu
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The main
 * @a: first input
 * @b: second one
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The main
 * @a: an inp
 * @b: an inp
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
