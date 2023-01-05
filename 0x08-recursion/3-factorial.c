#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number
 * Return: factorial or -1 if error
 */
int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	res = n * factorial(n - 1);
	return (res);
}
