#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
{
_putchar('\n');
return;
}

_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recursively call with the next character */
}
