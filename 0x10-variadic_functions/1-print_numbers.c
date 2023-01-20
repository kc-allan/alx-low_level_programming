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
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
