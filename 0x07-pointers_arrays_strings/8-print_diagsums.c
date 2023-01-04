#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Sum of matrix diagonal integers
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int k;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		k = 0;
		sum1 += *(a + i * size + i);
		k++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		k = size - 1;
		sum2 += *(a + i * size + size - i - 1);
		k--;
	}
	printf("%d, %d\n", sum1, sum2);
}
