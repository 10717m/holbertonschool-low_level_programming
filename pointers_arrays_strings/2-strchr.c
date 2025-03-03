#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s); /* Return pointer to the first occurrence of c */
}
s++;
}

/* If c is '\0', return pointer to the null terminator */
if (c == '\0')
{
return (s);
}

return (NULL); /* Character not found */
}
