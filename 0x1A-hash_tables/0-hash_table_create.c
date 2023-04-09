#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: size of hash table array
 *
 * Return: pointer to new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;
	
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	if ((int)size <= 0)
		return (NULL);
	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	new->size = size;
	return (new);
}
