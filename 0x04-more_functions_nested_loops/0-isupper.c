#include "main.h"
/**
 * _isupper - Checks if parameter a is uppercase
 * @c: Parameter to be checked
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	int x;

	for (x = 'A'; x < 'Z'; x++)
	{
		if (c == x)
		{
			_putchar(c);
			_putchar(':');
			_putchar(' ');
			return (1);
		}
		else
		{
			_putchar(c);
			_putchar(':');
			_putchar(' ');
			return (0);
		}
	}
}
