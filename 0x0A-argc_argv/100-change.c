#include <stdio.h>
#include <stdlib.h>

/**
 * main - maoin
 * @argc: argc
 * @argv: argv
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

int coinValues[] = {25, 10, 5, 2, 1};
int numCoins = 0;
int numCoinTypes = sizeof(coinValues) / sizeof(coinValues[0]);

for (int i = 0; i < numCoinTypes; i++)
{
numCoins += cents / coinValues[i];
cents %= coinValues[i];
}

printf("%d\n", numCoins);
return (0);
}

