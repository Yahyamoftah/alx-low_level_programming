#include "main.h"

/**
 *comparar - main
 *@n: num
 *@y: num
 *Return: square root
 */

int funcc(int n, int y)
{
int count = 0;
if (y <= n)
{
if (n % y == 0)
count++;
return (count + funcc(n, y + 1));
}
return (count);
}

/**
*is_prime_number - mian
*@n: num
*Return: 1
*/

int is_prime_number(int n)
{
if (funcc(n, 1) == 2)
return (1);
else
return (0);
}
