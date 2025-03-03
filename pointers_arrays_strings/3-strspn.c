#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing accepted characters
 *
 * Return: Number of bytes in the initial segment of s consisting only  accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
char *a; /* Declare the variable at the beginning of the block */

while (*s)
{
found = 0;
a = accept; /* Assign the value here */

while (*a)
{
if (*s == *a)
{
found = 1;
break;
}
a++;
}

if (!found)
{
break;
}

count++;
s++;
}

return (count);
}
