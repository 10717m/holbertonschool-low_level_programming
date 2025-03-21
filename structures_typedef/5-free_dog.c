#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog_t structure to free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

/* Free the name and owner strings */
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);

/* Free the dog structure itself */
free(d);
}
