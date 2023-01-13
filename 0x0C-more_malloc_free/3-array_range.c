#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates array of integers
 * @min: strating point
 * @max: last element
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int) + 2);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
