#include "main.h"
/**
 * reverse_array - Reverses elements of an integer array
 * @a: array of integers
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int k = n;

	while (i < n)
	{
		a[i] = a[k];
		i++;
		k++;
	}
}
