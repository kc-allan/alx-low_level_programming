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

new = malloc(sizeof(hash_table_t));
new->size = size;
new->array = malloc(sizeof(hash_node_t) * size);
return (new);
}
