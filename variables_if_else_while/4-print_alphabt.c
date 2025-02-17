#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e', followed by a new line,
 * using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* Loop through lowercase letters 'a' to 'z' */
for (letter = 'a'; letter <= 'z'; letter++)
{
/* Skip printing 'q' and 'e' */
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}

/* Print a new line */
putchar('\n');

return (0);
}
