#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from n to 98,
 * separated by a comma and a space, and ends with a newline.
 */
void print_to_98(int n)
{
if (n <= 98)
{
/* Increment from n to 98 */
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
else
{
/* Decrement from n to 98 */
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}

/* Print a new line at the end */
printf("\n");
}
