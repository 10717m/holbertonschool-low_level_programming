#include "main.h"

/**
 * print_square - Prints a square of a given size.
 * @size: The size of the square.
 *
 * Description: This function prints a square using the '#' character.
 * If size is 0 or less, it only prints a newline.
 */
void print_square(int size)
{
int i, j;

if (size <= 0) /* If size is 0 or less, print only a newline */
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++) /* Loop for each row */
{
for (j = 0; j < size; j++) /* Loop for each column */
{
_putchar('#'); /* Print the '#' character */
}
_putchar('\n'); /* Print a newline at the end of each row */
}
}
