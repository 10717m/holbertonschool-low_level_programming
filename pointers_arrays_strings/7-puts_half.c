#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: A pointer to the string.
 *
 * Description: function prints the second half of the string. If the number
 * of characters  it prints the last n characters, where n = (length + 1) / 2.
 */
void puts_half(char *str)
{
int len = 0; /* Initialize the length counter */
int start;   /* Starting index for printing */

/* Calculate the length of the string */
while (str[len] != '\0')
{
len++;
}

/* Calculate the starting index */
if (len % 2 == 0) /* If the length is even */
{
start = len / 2;
}
else /* If the length is odd */
{
start = (len + 1) / 2;
}

/* Print the second half of the string */
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n'); /* Print a newline at the end */
}
