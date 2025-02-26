#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, but skips 2 and 4.
 */
void print_most_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')  // Skip 2 and 4
{
_putchar(num);  // Print the number
}
}
_putchar('\n');  // Print a newline character
}

