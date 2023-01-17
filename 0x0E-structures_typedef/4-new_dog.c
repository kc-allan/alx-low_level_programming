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

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
