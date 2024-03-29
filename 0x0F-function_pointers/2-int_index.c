#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: poimter to functiin with comparison values
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	}
	return (-1);
}
