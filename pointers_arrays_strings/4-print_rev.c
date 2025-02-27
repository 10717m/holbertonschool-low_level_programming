#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string.
 *
 * Description: function calculates the length of the string and then prints
 * it in reverse order, followed by a new line.
 */
void print_rev(char *s)
{
int len = 0; /* Initialize the length counter */

/* Calculate the length of the string */
while (s[len] != '\0')
{
len++;
}

/* Print the string in reverse */
for (len--; len >= 0; len--)
{
_putchar(s[len]);
}

_putchar('\n'); /* Print a newline at the end */
}
