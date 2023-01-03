#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @n: number of bytes to be filled
 * @s: points to the memory area
 * @b constant byte to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *r;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	_putchar('\n');
	r = s;
	return (r);
}
