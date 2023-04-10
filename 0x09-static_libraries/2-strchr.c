#include "main.h"

/**
 * _strchr - Func that locates a character in a string.
 * @s: The string will be searched.
 * @c: The character will be located.
 *
 * Return: If c is found - a pointer to the first.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
