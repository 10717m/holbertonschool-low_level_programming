#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line each time.
 *
 * Description: This function prints the alphabet in lowercase 10 times,
 * each followed by a new line, using only the _putchar function twice.
 */
void print_alphabet_x10(void)
{
int i;
char letter;

/* Outer loop to repeat 10 times */
for (i = 0; i < 10; i++)
{
/* Inner loop to print the alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}

/* Print a new line after each alphabet */
_putchar('\n');
}
}
