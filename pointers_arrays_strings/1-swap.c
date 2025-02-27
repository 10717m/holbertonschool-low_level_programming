#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description:function swaps the values of the integers pointed to by a and b
 */
void swap_int(int *a, int *b)
{
int temp; /* Temporary variable to hold one of the values */

temp = *a; /* Store the value pointed to by a in temp */
*a = *b;   /* Assign the value pointed to by b to a */
*b = temp; /* Assign the value stored in temp to b */
}
