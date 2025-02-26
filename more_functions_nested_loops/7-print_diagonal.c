#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints the character '\' in a diagonal pattern,
 * followed by a newline character. If n is 0 or less, it only prints a newline.
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0) /* If n is 0 or less, print only a newline */
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++) /* Loop for each line */
{
for (j = 0; j < i; j++) /* Print spaces before the '\' */
{
_putchar(' ');
}
_putchar('\\'); /* Print the '\' character */
_putchar('\n'); /* Print a newline at the end of each line */
}
}
