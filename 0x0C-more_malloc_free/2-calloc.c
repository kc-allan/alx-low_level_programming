#include <stdlib.h>
#include "main.h"
/**
 * _calloc- allocates memoey for an array
 * @nmemb: number of elements in array
 * @size: size of elements
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
