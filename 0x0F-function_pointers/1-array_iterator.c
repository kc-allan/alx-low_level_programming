#include "function_pointers.h"
/**
 * array_iterator - executes a function to every array element
 * @array: given array
 * @size: size of array
 * @action: function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
