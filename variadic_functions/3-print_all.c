#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 *          c: char, i: integer, f: float, s: char * (if NULL, print (nil)).
 *          Any other character is ignored.
 * @...: A variable number of arguments to print.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char current_format;
int first = 1;  /* Flag to track the first argument */

va_start(args, format);

while (format && format[i])
{
current_format = format[i];

if (!first)
printf(", ");

switch (current_format)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
i++;
continue;
}

first = 0;  /* Reset the flag after printing the first argument */
i++;
}

va_end(args);
printf("\n");
}
