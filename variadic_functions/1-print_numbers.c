#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, separated by a specified string.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to print.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;  /* Declare a variable to hold the arguments */
unsigned int i;

va_start(args, n);  /* Initialize the argument list */

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));  /* Print the current number */

/* Print the separator if it's not NULL and not the last number */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);  /* Clean up the argument list */

printf("\n");  /* Print a newline at the end */
}
