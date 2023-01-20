#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a sequence of strings
 * @separator: separates strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL || x == "")
			x = "(nil)";
		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%s", x);
			else
				printf("%s%s", x, separator);
		}
		else
		{
			printf("%s\n", x);
		}
	}
	va_end(args);
}
