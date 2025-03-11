#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars initializes it with a specific char
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or size is 0 or if memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

/* Return NULL if size is 0 */
if (size == 0)
return (NULL);
/* Allocate memory for the array */
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

/* Initialize the array with the specified character */
for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
