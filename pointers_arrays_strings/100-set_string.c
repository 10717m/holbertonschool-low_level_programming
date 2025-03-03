#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to the pointer to modify
 * @to: Pointer to the string to set
 */
void set_string(char **s, char *to)
{
*s = to; /* Set the value of *s to point to the same location as to */
}
