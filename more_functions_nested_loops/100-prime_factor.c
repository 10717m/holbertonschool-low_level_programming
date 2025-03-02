#include <stdio.h>
#include <math.h>

/**
 * is_prime - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(long int n)
{
long int i;

if (n <= 1)
return (0);

for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
return (0);
}

return (1);
}

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143;
long int largest_prime = 0;
long int i;

for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0 && is_prime(i))
{
largest_prime = i;
}
}

printf("%ld\n", largest_prime);

return (0);
}
