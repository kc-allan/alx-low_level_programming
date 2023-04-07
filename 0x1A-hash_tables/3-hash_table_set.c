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
	unsigned long int hash;
	unsigned long int index, i;
	char *ky = strdup(key), *val = strdup(value);
	hash_node_t *node, *current;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (1);
	node->key = ky;
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = val;
	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;
	for (i = 0; ht->array[i] != NULL && i < index; i++)
	{
		if (i++ == index)
		{
			current = ht->array[i];
			break;
		}
	}
	node->next = current;
	current = node;
	return (1);
}
