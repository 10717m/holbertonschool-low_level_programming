#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
int i;

/* Iterate through the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Check if the character is a lowercase or uppercase letter */
if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
{
/* Apply ROT13 transformation */
str[i] = ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')) ? str[i] + 13 : str[i] - 13;
}
}

return (str);
}
