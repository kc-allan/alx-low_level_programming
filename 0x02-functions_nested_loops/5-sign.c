#include "main.h"
/**
 * print_sign - Checks for the sign of a parameter n
 * @n: value to be checked
 * Return: 1 (Positive) 0 (Zero) -1 (Negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
