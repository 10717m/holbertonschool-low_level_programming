#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog.
 * @name: The name of the dog (type: char *).
 * @age: The age of the dog (type: float).
 * @owner: The owner of the dog (type: char *).
 *
 * Description: This structure defines a dog with its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;


#endif /* DOG_H */
