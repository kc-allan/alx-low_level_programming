#include "main.h"
/**
 * print_binary - converts number to its bunary equivalent
 * @n: base 10 number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');	
}
