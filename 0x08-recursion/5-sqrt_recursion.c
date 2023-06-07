#include "main.h"

/**
 * calculate_sqrt - main
 * @n: num
 * @guess: input
 * Return: num
 */

int calculate_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}

if (guess * guess > n)
{
return (-1);
}

return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - main
 * @n: num
 * Return: num
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (calculate_sqrt(n, 0));
}

