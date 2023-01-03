#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes to be filled
 * @s: points to the memory area
 * @b: constant byte to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *r;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	r = s;
	return (r);
}
