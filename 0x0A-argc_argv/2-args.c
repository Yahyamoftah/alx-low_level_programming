#include <stdio.h>
/**
 * main - func print arguments which receives.
 * @argc: number of the command line arguments.
 * @argv: array which contain program command the line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
