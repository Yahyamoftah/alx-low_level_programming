#include "main.h"

/**
 * _puts_recursion - main
 * @s: str
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recursive call with next character */
}
