#include "main.h"
/**
 * print_last_digit - Displays last digit of a number n
 * @n: parameter number
 * Return: Value of last digit r
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		r *= -1;
	}
	_putchar('0' + r);
	return (r);
}
