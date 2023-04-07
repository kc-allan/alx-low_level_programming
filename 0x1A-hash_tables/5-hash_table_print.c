#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash_table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 9; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (first == 0)
			{
				printf("'%s': '%s'", ht->array[i]->key,ht->array[i]->value);
				first++;
			}
			else
				printf(", '%s': '%s'", ht->array[i]->key,ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
