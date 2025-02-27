#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: A pointer to the string.
 *
 * Description:function reverses the string by swapping characters from the
 * beginning and end, moving toward the center.
 */
void rev_string(char *s)
{
int len = 0; /* Initialize the length counter */
int start, end;
char temp;

/* Calculate the length of the string */
while (s[len] != '\0')
{
len++;
}

/* Swap characters from the beginning and end */
start = 0;
end = len - 1;
while (start < end)
{
/* Swap s[start] and s[end] */
temp = s[start];
s[start] = s[end];
s[end] = temp;

/* Move the pointers toward the center */
start++;
end--;
}
}
