#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds data into a hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 (Success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	char *ky = strdup(key), *val = strdup(value);
	hash_node_t *node, *current;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (1);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		current = ht->array[i];
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = val;
			return (1);
		}
	}
	node->key = ky;
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = val;
	node->next = current;
	current = node;
	return (1);
}
