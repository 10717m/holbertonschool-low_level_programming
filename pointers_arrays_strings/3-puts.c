#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: A pointer to the string.
 *
 * Description:function prints each character of the string until the null
 * terminator is encountered, followed by a new line.
 */
void _puts(char *str)
{
while (*str != '\0') /* Loop until the null terminator is found */
{
_putchar(*str); /* Print the current character */
str++;          /* Move to the next character */
}
_putchar('\n'); /* Print a newline at the end */
}
