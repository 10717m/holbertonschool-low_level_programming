#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first element for which cmp does not return 0.
 *         If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)  /* Check if array, cmp, and size are valid */
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))  /* Call the comparison function */
return (i);     /* Return the index if cmp returns non-zero */
}
}
return (-1);  /* Return -1 if no match or invalid input */
}
