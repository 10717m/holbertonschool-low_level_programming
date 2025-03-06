#include "main.h"

/**
 * sqrt_helper - Helper function to find natural square root using recursion
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if no natural square root exists
 */
int sqrt_helper(int n, int guess)
{
if (guess * guess == n) /* Base case: guess is the square root */
{
return (guess);
}

if (guess * guess > n) /* Base case: no natural square root */
{
return (-1);
}

return (sqrt_helper(n, guess + 1)); /* Recursively increment guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of  number using recursion
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* Base case: error for negative numbers */
{
return (-1);
}

if (n == 0 || n == 1) /* Base case: square root of 0 or 1 */
{
return (n);
}

return (sqrt_helper(n, 1)); /* Start with guess = 1 */
}
