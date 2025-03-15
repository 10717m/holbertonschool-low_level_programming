#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog_t (struct dog).
 *         Returns NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
size_t name_len, owner_len;

/* Allocate memory for the dog_t structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* Calculate lengths of name and owner */
name_len = strlen(name);
owner_len = strlen(owner);

/* Allocate memory and copy the name */
name_copy = malloc(name_len + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
for (size_t i = 0; i <= name_len; i++)
name_copy[i] = name[i];

/* Allocate memory and copy the owner */
owner_copy = malloc(owner_len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
for (size_t i = 0; i <= owner_len; i++)
owner_copy[i] = owner[i];

/* Assign values to the new dog */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
