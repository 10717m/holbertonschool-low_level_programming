#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as parameter element of an array
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)  /* Check if array and action are not NULL */
{
for (i = 0; i < size; i++)
{
action(array[i]);  /* Call the function pointed to by action */
}
}
}
