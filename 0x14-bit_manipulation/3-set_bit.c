#include "main.h"
/**
 * set_bit - sets bit at index to 1
 * @n: number in base 10
 * @index: position of bit
 * Return: 1(success) -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (&n > 1 && k != index)
	{
		k++;
		set_bit(n >> 1, index);
		return (n);
	}
	return (-1);
}
