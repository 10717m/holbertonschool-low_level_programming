#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Description: This function prints the numbers from 0 to 9 using _putchar.
 * It uses _putchar only twice in the code.
 */
void print_numbers(void)
{
int i;

/* Loop through numbers 0 to 9 */
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}

/* Print a new line */
_putchar('\n');
}
