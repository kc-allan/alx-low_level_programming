#include "main.h"
/**
 * get_bit - gets bit at an index
 * @n: number in base 10
 * @index: position of bit
 * Return: bit at a position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k = 0;

	if (n > 1 && k != index)
	{
		k++;
		get_bit(n >> 1, index);
	}
	return (k);
}
