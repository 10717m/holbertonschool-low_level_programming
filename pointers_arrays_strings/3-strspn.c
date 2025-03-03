#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing accepted characters
 *
 * Return: bytes in the initial segment of consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;

while (*s)
{
found = 0;
char *a = accept;

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
