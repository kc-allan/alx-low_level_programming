#include "hash_tables.h"
/**
 * hash_table_get - fetches value us8ng key
 * @ht: pointer to hash_table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if ((strcmp(ht->array[i]->key, key)) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
