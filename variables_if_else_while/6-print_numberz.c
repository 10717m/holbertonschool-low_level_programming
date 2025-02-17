#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers of base 10
 * starting from 0, followed by a new line, using only the putchar function
 * and without using any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

/* Loop through numbers 0 to 9 */
for (number = 0; number < 10; number++)
{
/* Convert the number to its ASCII representation and print it */
putchar(number + '0');
}

/* Print a new line */
putchar('\n');

return (0);
}
