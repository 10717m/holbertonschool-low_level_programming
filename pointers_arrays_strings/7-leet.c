#include "main.h"

/**
 * leet - Encodes a string into 1337 (Leet Speak).
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet[] = "4433007711";

/* Iterate through the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Check if the current character is in the letters array */
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
/* Replace the character with its Leet equivalent */
str[i] = leet[j];
break; /* Exit the inner loop once a match is found */
}
}
}
return (str);
}
