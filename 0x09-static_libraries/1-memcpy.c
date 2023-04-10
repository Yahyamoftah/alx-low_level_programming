#include "main.h"

/**
 * _memcpy - fun Copiy @n bytes from the memory area pointed
 *           to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory.
 * @src: Buffer to copy characters from.
 * @n: The number of bytes.
 *
 * Return: A pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	} /*END WHILE*/


	return (dest);
}
