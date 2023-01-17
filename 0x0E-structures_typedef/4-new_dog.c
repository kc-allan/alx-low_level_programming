#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates another dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
