#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer that specifies how the name should be printed.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)  /* Check if name and f are not NULL */
f(name);    /* Call the function pointed to by f */
}
