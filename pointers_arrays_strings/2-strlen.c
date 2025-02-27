#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int len = 0; /* Initialize the length counter */

while (*s != '\0') /* Loop until the null terminator is found */
{
len++; /* Increment the length counter */
s++;   /* Move to the next character */
}

return (len); /* Return the length of the string */
}
