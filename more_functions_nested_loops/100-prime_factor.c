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

/* Divide n by 2 until it is odd */
while (n % 2 == 0)
{
largest_prime = 2;
n /= 2;
}

/* Check odd factors from 3 to sqrt(n) */
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_prime = i;
n /= i;
}
}

/* If n is still greater than 2, it is a prime number */
if (n > 2)
largest_prime = n;

printf("%ld\n", largest_prime);

return (0);
}
