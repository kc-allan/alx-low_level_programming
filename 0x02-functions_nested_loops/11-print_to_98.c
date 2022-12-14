#include "main.h"
/**
 * print_to_98 - Prints from parameter a to 98
 * @r: Starting point
 * Return: 0
 */
void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		printnumber(n / 10);
	_putchar((n % 10) + '0');
}
void print_to_98(int r)
{
	while (r != 98)
	{
		if (r < 0)
		{
			_putchar('-');
                  	r = -r;
		}
		if (r == 0)
			_putchar('0');
		if (r / 10)
		       	printnumber(n / 10);
		_putchar ((n % 10) + '0');
		r++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
