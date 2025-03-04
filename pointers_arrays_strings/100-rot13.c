#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
int i, j;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++) /* Loop through the string */
{
for (j = 0; input[j] != '\0'; j++) /* Loop through the input alphabet */
{
if (str[i] == input[j]) /* Only one if statement */
{
str[i] = output[j]; /* Replace with ROT13 equivalent */
break; /* Exit the inner loop once a match is found */
}
}
}

return (str);
}
