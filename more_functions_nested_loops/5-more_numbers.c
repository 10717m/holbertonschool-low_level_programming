#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14, 10 times, followed by a new line.
 *
 * Description: This function prints the numbers 0 to 14, repeated 10 times,
 * with each sequence followed by a new line. It uses _putchar only three times
 * in the entire code.
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++) /* Repeat 10 times */
{
for (j = 0; j <= 14; j++) /* Print numbers 0 to 14 */
{
if (j >= 10) /* For numbers 10 to 14 */
{
_putchar((j / 10) + '0'); /* Print the tens digit */
}
_putchar((j % 10) + '0'); /* Print the units digit */
}
_putchar('\n'); /* Print a new line after each sequence */
}
}
