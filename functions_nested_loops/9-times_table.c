#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the 9 times table in a formatted manner,
 * with proper spacing and commas.
 */
void times_table(void)
{
int row, column, product;

/* Loop through rows (0 to 9) */
for (row = 0; row < 10; row++)
{
/* Loop through columns (0 to 9) */
for (column = 0; column < 10; column++)
{
/* Calculate the product */
product = row * column;

/* Print the product with proper formatting */
if (column == 0)
{
_putchar('0' + product);
}
else
{
_putchar(',');
_putchar(' ');

if (product < 10)
{
_putchar(' ');
}
else
{
_putchar('0' + (product / 10));
}

_putchar('0' + (product % 10));
}
}

/* Print a new line after each row */
_putchar('\n');
}
}
