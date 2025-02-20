#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function prints all lowercase letters from 'a' to 'z',
 * followed by a new line, using only the _putchar function twice.
 */
void print_alphabet(void)
{
char letter;

/* Loop through lowercase letters 'a' to 'z' */
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}

/* Print a new line */
_putchar('\n');
}
