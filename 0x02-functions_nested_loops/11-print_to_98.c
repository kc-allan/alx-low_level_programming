#include "main.h"
/**
 * print_to_98 - Prints from parameter a to 98
 * @n: Starting point
 * Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
