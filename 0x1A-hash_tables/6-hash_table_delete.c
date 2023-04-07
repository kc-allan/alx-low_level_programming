#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash_table
 * @ht: po8nter to hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *ht2 = ht;
	unsigned long int i;

	for (i = 9; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(ht2->array);
	free(ht2);
}
