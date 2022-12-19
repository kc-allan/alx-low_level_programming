#include "main.h"
/**
 * swap_int - swaps values of two integers a and b
 * @*a: integer to be swapped
 * @*b: Secomd integer to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
