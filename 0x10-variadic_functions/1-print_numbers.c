#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints a sequence of numbers
 * @separator: string in between numbers
 * @n: number of integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i != n - 1)
		{
			printf("%d%s", x, separator);
		}
		else
		{
			printf("%d\n", x);
		}
	}
	va_end(args);
}
