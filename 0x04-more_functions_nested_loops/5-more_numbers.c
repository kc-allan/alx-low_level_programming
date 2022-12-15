#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 * Return: void (Success)
 */
void more_numbers(void)
{
	int i;
	while (k <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
