#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, separated by a specified string.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to print.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;  /* Declare a variable to hold the arguments */
unsigned int i;
char *str;

va_start(args, n);  /* Initialize the argument list */

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);  /* Get the current string */

/* Print (nil) if the string is NULL, otherwise print the string */
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

/* Print the separator if it's not NULL and not the last string */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);  /* Clean up the argument list */

printf("\n");  /* Print a newline at the end */
}
