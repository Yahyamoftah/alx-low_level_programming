#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: num of arg
 * @argv: arry of arg
 * Return: 0 on success, 1 on error
 */


int main(int argc, char **argv)
{
int amount, numCoins = 0;
int coins[] = {25, 10, 5, 2, 1};
int numCoinTypes = sizeof(coins) / sizeof(coins[0]);

if (argc != 2)
{
printf("Error\n");
return (1);
}

amount = atoi(argv[1]);

for (int i = 0; i < numCoinTypes; i++)
{
while (amount >= coins[i])
{
amount -= coins[i];
numCoins++;
}
}

printf("%d\n", numCoins);
return (0);
}

