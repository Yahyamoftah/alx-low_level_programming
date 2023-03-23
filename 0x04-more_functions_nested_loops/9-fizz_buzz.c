#include <stdio.h>

/**
 * main - prints the number from 1 - 100, but for multi of 3 Fizz & 5 Buzz
 *
 * Return: returns 0
**/

int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}
	}

	printf("Buzz");
	printf("\n");

	return (0);
}
