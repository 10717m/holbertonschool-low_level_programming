#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 *         If new_size == old_size, return ptr.
 *         If new_size is zero and ptr is not NULL, return NULL.
 *         If malloc fails, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

/* If new_size is zero and ptr is not NULL, equivalent to free(ptr) */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

/* If new_size == old_size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

/* Allocate memory for the new size */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

/* Copy contents from ptr to new_ptr up to minimum of old_size and new_size */
for (i = 0; i < old_size && i < new_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);

/* Free the old memory block */
free(ptr);

return (new_ptr);
}
