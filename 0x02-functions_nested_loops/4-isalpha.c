#include "main.h"

/**
 * _isalpha - check if the character is alphabet or not
 * @c: checking the character
 *
 * Return: returns 1 if the character is alphabet and 0 if not 
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
