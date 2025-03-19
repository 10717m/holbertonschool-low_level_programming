#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character.
 * @args: The argument list.
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The argument list.
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The argument list.
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The argument list.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

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
int first = 1;  /* Flag to track the first argument */

va_start(args, format);

while (format && format[i])
{
if (!first)
printf(", ");

switch (format[i])
{
case 'c':
print_char(args);
break;
case 'i':
print_int(args);
break;
case 'f':
print_float(args);
break;
case 's':
print_string(args);
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
