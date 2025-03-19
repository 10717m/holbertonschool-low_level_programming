#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to sum.
 *
 * Return: The sum of all parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;  /* Declare a variable to hold the arguments */
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(args, n);  /* Initialize the argument list */

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);  /* Access each argument and add it to sum */
}

va_end(args);  /* Clean up the argument list */

return (sum);
}
