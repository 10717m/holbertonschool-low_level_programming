#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing characters to search for
 *
 * Return: Pointer to the first occurrence of any character from accept in s,
 *         or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
char *a;

while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
{
return (s); /* Return pointer to the matching character */
}
a++;
}
s++;
}

return (NULL); /* No match found */
}
