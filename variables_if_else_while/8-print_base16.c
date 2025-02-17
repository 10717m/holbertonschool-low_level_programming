#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit;

/* Loop through digits 0 to 9 */
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

/* Loop through letters a to f */
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

/* Print a new line */
putchar('\n');

return (0);
}
