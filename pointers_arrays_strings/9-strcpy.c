#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

/* Copy characters from src to dest */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

/* Copy the null terminator */
dest[i] = '\0';

return (dest); /* Return the pointer to dest */
}
