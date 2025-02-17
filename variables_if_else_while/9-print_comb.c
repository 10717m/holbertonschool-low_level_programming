#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of single-digit
 * numbers, separated by ", ", in ascending order, using only the putchar
 * function and without using any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

/* Loop through numbers 0 to 9 */
for (number = 0; number < 10; number++)
{
/* Print the number */
putchar(number + '0');

/* Print ", " after each number except the last one */
if (number < 9)
{
putchar(',');
putchar(' ');
}
}

/* Print a new line */
putchar('\n');

return (0);
}
