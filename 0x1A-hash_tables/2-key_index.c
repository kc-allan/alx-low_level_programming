#include "hash_tables.h"
/**
 * key_index - Comoutes a index from a hash value
 * @key: key for data
 * @size: size of hash table
 *
 * Return: index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
