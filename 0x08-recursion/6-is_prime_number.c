#include "main.h"

/**
 * is_prime_number - main
 * @n: num
 * Return: 1
 */

int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - main
 * @n: num
 * @divisor: nuim
 * Return: 1
 */

int is_prime_recursive(int n, int divisor)
{
if (n < 2)
{
return (0);
}

if (divisor * divisor > n)
{
return (1);
}

if (n % divisor == 0)
{
return (0);
}

return (is_prime_recursive(n, divisor + 1));
}

