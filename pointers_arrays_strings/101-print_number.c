#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
int divisor = 1;

/* Handle negative numbers */
if (n < 0)
{
_putchar('-');
n = -n;
}

/* Find the divisor for the leftmost digit */
while (n / divisor >= 10)
{
divisor *= 10;
}

/* Print each digit */
while (divisor != 0)
{
_putchar((n / divisor)+'0'); /* No space after '+' */
n %= divisor;
divisor /= 10;
}
}
