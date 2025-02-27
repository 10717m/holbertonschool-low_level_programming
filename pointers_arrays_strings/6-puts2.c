#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: A pointer to the string.
 *
 * Description:function prints every other character of the string
 */
void puts2(char *str)
{
int i = 0; /* Initialize the index counter */

while (str[i] != '\0') /* Loop until the null terminator is found */
{
if (i % 2 == 0) /* Check if the index is even */
{
_putchar(str[i]); /* Print the character */
}
i++; /* Move to the next character */
}
_putchar('\n'); /* Print a newline at the end */
}
