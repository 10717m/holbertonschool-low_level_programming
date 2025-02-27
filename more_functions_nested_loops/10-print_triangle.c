#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle using the '#' character.
 * If size is 0 or less, it only prints a newline.
 */
void print_triangle(int size)
{
int i, j, k;

if (size <= 0) /* If size is 0 or less, print only a newline */
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++) /* Loop for each row */
{
for (j = 1; j <= size - i; j++) /* Print spaces before the '#' */
{
_putchar(' ');
}
for (k = 1; k <= i; k++) /* Print the '#' characters */
{
_putchar('#');
}
_putchar('\n'); /* Print a newline at the end of each row */
}
}
