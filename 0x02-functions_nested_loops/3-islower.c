#include "main.h"

/**
 * _islower - check if the character is in lowercase
 * @c: checking character
 *
 * Return: returns 1 if  character is in the  lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

