#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* Loop through lowercase letters 'z' to 'a' */
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

/* Print a new line */
putchar('\n');

return (0);
}
