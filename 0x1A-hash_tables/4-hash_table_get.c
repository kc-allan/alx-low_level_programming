#include "hash_tables.h"
/**
 * hash_table_get - fetches value us8ng key
 * @ht: pointer to hash_table
 * @key: key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	for (i = index; ht->array[i]; i++)
	{
		if (ht->array[i] == NULL)
			return (NULL);
		if ((strcmp(ht->array[i]->key, key)) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
