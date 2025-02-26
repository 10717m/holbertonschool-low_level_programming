#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 *
 * Description: This function prints the numbers 0, 1, 3, 5, 6, 7, 8, and 9,
 * followed by a new line. It uses _putchar only twice in the entire code.
 */
void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
