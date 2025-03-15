#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
int len = 0;

while (str[len])
len++;

return (len);
}

/**
 * _strcopy - Copies a string from source to destination
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcopy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

/* Allocate memory for the dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* Allocate memory and copy the name */
name_copy = malloc(_strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
_strcopy(name_copy, name);

/* Allocate memory and copy the owner */
owner_copy = malloc(_strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
_strcopy(owner_copy, owner);

/* Assign the copied values to the new dog */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
