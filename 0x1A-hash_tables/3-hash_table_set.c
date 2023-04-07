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
	node->key = ky;
	node->value = val;
	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;
	for (i = 0; ht->array[i] != NULL && i < index; i++)
	{
		if (i++ == index)
		{
			printf("Allocating to current...\n");
			current = ht->array[i];
			printf("Allocated to current\n");
			break;
		}
	}
	while (current->next != NULL)
		current = current->next;
	current->next = node;
	node->next = NULL;
	return (0);
}
