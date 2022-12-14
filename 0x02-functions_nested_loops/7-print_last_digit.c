#include "main.h"
/**
 * print_last_digit - Displays last digit of a number n
 * @n: parameter number
 * Return: Value of last digit r
 */
int print_last_digit(int n)
{
	int r;
	
	r = n % 10;
	_putchar(r);
	return (r);
}
