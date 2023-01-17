#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated to dog
 * @d: pointer to dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
