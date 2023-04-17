#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *scooby;
	int i, lname, lowner;

	scooby = malloc(sizeof(*dog_t));
	if (scooby == NULL || !(name) || !(owner))
	{
		free(scooby);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	scooby->name = malloc(lname + 1);
	scooby->owner = malloc(lowner + 1);

	if (!(scooby->name) || !(scooby->owner))
	{
		free((*scooby)->owner);
		free(scooby->name);
		free(scooby);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		scooby->name[i] = name[i];
	scooby->name[i] = '\0';

	scooby->age = age;

	for (i = 0; i < lowner; i++)
		scooby->owner[i] = owner[i];
	scooby->owner[i] = '\0';

	return (scooby);
}
