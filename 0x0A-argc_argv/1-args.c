#include <stdio.h>
/**
 * main - print number of argument passed into on.
 * @argc: number of the command line arguments.
 * @argv: array which contain a program command the line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
