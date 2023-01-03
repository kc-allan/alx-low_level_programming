#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @dest: memory to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
