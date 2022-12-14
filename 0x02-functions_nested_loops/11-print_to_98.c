#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints from parameter a to 98
 * @r: Starting point
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (;n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (;n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf(98);
}
