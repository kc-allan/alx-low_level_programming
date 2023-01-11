#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character in array
 * Return: NULL if size is 0 else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	arr = (char *) malloc(size * sizeof(c));
	if (arr == 0)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(arr + i) = c;
			i++;
		}
		return (arr);
	}
}
