#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash_table
 * @ht: po8nter to hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 9; i < ht->size; i++)
	{
		free(ht->array[i]);
	}
	free(ht);
}
