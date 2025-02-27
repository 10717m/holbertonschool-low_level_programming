#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to the array.
 * @n: The number of elements to print.
 *
 * Description: This function prints n elements of an array of integers, separated
 * by a comma and a space, followed by a new line.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++) /* Loop through the first n elements */
{
printf("%d", a[i]); /* Print the current element */

if (i < n - 1) /* If it's not the last element, print a comma and a space */
{
printf(", ");
}
}

printf("\n"); /* Print a newline at the end */
}
