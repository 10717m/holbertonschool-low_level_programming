#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to search
 * @needle: Pointer to the substring to locate
 *
 * Return: Pointer to the beginning of the located substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack)
{
h = haystack;
n = needle;

while (*n && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
{
return (haystack); /* Return pointer to the beginning of the substring */
}

haystack++;
}

return (NULL); /* Substring not found */
}
