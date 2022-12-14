#include "main.h"
/**
 * print_times_table - prints the times table from 0 - n
 * @n: Number of times table rows and columns
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= (n + 1))
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < (n + 1) && j != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res % 10) + '0');
			}
		}

			_putchar('\n');
	}
}
