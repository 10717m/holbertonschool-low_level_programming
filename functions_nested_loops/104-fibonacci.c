#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int a1 = 0, a2 = 1, b1 = 0, b2 = 2;
unsigned long int next1, next2;

printf("%lu, %lu", b2, a2 + b2);

for (i = 2; i < 98; i++)
{
next1 = a1 + b1;
next2 = a2 + b2;

if (next2 < b2)
{
next1 += 1;
}

a1 = b1;
a2 = b2;
b1 = next1;
b2 = next2;

printf(", %lu%lu", b1, b2);
}

printf("\n");

return (0);
}
