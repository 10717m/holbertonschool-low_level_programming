#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n,
 * extracts its last digit, and prints a message based on the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

/* Seed the random number generator */
srand(time(0));
n = rand() - RAND_MAX / 2;

/* Extract the last digit of n */
last_digit = n % 10;

/* Print the last digit and the appropriate message */
printf("Last digit of %d is %d and is ", n, last_digit);

if (last_digit > 5)
{
printf("greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}
