#include <stdio.h>

/**
 * main - main func
 * @argc: num of arg
 * @argv: arry of arg
 * Return: 0
 */

int main(int argc, char **argv)
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
