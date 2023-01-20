#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its arguments
 * @n: number if numbers to be summed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return(0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
