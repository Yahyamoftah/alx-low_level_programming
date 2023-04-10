#include "main.h"

/**
 * _strpbrk - Func that searches a string for any of a set of bytes.
 * @s: The string will be searched.
 * @accept: The set of bytes will be searched.
 *
 * Return: If a set is matched - a pointer to matched byte.
 *         If it is not matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
