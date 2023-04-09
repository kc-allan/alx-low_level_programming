#include "hash_tables.h"
/**
 * hash_table_set - adds key: value pair to a hash table
 * @ht: pointer to hash_table
 * @key: key
 * @value: value
 *
 * Return: 1 (success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index, i;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
