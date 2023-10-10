#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog with copied name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer to the newly created dog (dog_t)
 *         If malloc fails or if name or owner is NULL, return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the new dog struct */
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for copies of name and owner */
	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	/* Initialize the new dog */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
